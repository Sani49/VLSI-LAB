library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity accumulator_4bit_tb is
-- Testbench has no ports
end accumulator_4bit_tb;

architecture Behavioral of accumulator_4bit_tb is

    component accumulator_4bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            A     : in  STD_LOGIC_VECTOR(3 downto 0);
            B     : in  STD_LOGIC_VECTOR(3 downto 0);
            Q     : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    -- Signal Declarations
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal A     : STD_LOGIC_VECTOR(3 downto 0) := (others => '0');
    signal B     : STD_LOGIC_VECTOR(3 downto 0) := (others => '0');
    signal Q     : STD_LOGIC_VECTOR(3 downto 0);

    -- Clock Period (20 ns cycle = 10 ns HIGH, 10 ns LOW)
    constant CLK_PERIOD : time := 20 ns;

begin

    -- Instantiate Unit Under Test (UUT)
    uut: accumulator_4bit PORT MAP (
        CLK   => CLK,
        RESET => RESET,
        A     => A,
        B     => B,
        Q     => Q
    );

    -- Clock Generation Process
    clk_process : process
    begin
        CLK <= '0';
        wait for CLK_PERIOD/2;
        CLK <= '1';
        wait for CLK_PERIOD/2;
    end process;

    -- Stimulus Process according to Required Test Sequence
    stim_proc: process
    begin
        wait for 10 ns;

        -- Step 1: RESET Operation (A=0000, B=0000 -> Expected Q = 0000)
        RESET <= '1';
        A <= "0000";
        B <= "0000";
        wait for CLK_PERIOD;

        -- Step 2: Load sum 3 + 5 (A=0011, B=0101 -> Expected Q = 1000)
        RESET <= '0';
        A <= "0011";
        B <= "0101";
        wait for CLK_PERIOD;

        -- Demonstration of "No rising edge -> Q remains unchanged"
        -- Changing A and B during mid-clock cycle, Q must stay 1000
        A <= "1111";
        B <= "1111";
        wait for 5 ns; -- Before rising edge arrives

        -- Step 3: Load new sum 2 + 1 (A=0010, B=0001 -> Expected Q = 0011)
        A <= "0010";
        B <= "0001";
        wait for 15 ns; -- Completes the clock cycle with rising edge

        -- Step 4: 4-bit overflow 15 + 1 (A=1111, B=0001 -> Expected Q = 0000)
        A <= "1111";
        B <= "0001";
        wait for CLK_PERIOD;

        -- Step 5: Load new sum 10 + 5 (A=1010, B=0101 -> Expected Q = 1111)
        A <= "1010";
        B <= "0101";
        wait for CLK_PERIOD;

        wait;
    end process;

end Behavioral;
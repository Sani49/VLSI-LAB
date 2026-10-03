library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_4bit_tb is
-- Testbench has no ports
end register_4bit_tb;

architecture Behavioral of register_4bit_tb is

    -- Component Declaration for the Unit Under Test (UUT)
    component register_4bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR(3 downto 0);
            Q     : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    -- Signal Declarations
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal D     : STD_LOGIC_VECTOR(3 downto 0) := (others => '0');
    signal Q     : STD_LOGIC_VECTOR(3 downto 0);

    -- Clock period definition
    constant CLK_PERIOD : time := 20 ns;

begin

    -- Instantiate the Unit Under Test (UUT)
    uut: register_4bit PORT MAP (
        CLK   => CLK,
        RESET => RESET,
        D     => D,
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

    -- Stimulus Process
    stim_proc: process
    begin
        -- Initial Reset State
        RESET <= '1';
        D <= "1010";
        wait for CLK_PERIOD; -- Rising edge a Q = "0000" hote hobe (Reset Priority)

        -- Test Case 1: Reset Release & Data Loading
        RESET <= '0';
        D <= "0101";
        wait for CLK_PERIOD; -- Q = "0101"

        -- Test Case 2: Change Input D before Rising Edge
        D <= "1100";
        wait for CLK_PERIOD; -- Q = "1100"

        -- Test Case 3: Re-assert Reset
        RESET <= '1';
        wait for CLK_PERIOD; -- Q = "0000"

        -- Test Case 4: Normal Operation Again
        RESET <= '0';
        D <= "1111";
        wait for CLK_PERIOD; -- Q = "1111"

        wait;
    end process;

end Behavioral;
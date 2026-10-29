
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit_tb is
end alu_8bit_tb;

architecture Behavioral of alu_8bit_tb is

    component alu_8bit
        Port (
            A      : in  STD_LOGIC_VECTOR(7 downto 0);
            B      : in  STD_LOGIC_VECTOR(7 downto 0);
            OP     : in  STD_LOGIC_VECTOR(2 downto 0);
            CLK    : in  STD_LOGIC;
            RESET  : in  STD_LOGIC;
            LOAD   : in  STD_LOGIC;
            RESULT : out STD_LOGIC_VECTOR(7 downto 0);
            COUT   : out STD_LOGIC
        );
    end component;

    signal A, B, RESULT : STD_LOGIC_VECTOR(7 downto 0)
        := (others => '0');

    signal OP : STD_LOGIC_VECTOR(2 downto 0) := "000";

    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal COUT  : STD_LOGIC;

begin

    UUT: alu_8bit
        port map (
            A => A,
            B => B,
            OP => OP,
            CLK => CLK,
            RESET => RESET,
            LOAD => LOAD,
            RESULT => RESULT,
            COUT => COUT
        );

    -- Clock generation
    CLK <= not CLK after 5 ns;

    process
    begin

        -- Reset
        RESET <= '1';
        LOAD <= '0';
        wait for 20 ns;

        RESET <= '0';
        LOAD <= '1';

        -- AND: 0F AND 33 = 03
        A <= x"0F";
        B <= x"33";
        OP <= "000";
        wait for 20 ns;

        -- OR: 0F OR 33 = 3F
        OP <= "001";
        wait for 20 ns;

        -- XOR: 0F XOR 33 = 3C
        OP <= "010";
        wait for 20 ns;

        -- NOT A: NOT 0F = F0
        OP <= "011";
        wait for 20 ns;

        -- ADD: 12 + 05 = 17
        A <= x"12";
        B <= x"05";
        OP <= "100";
        wait for 20 ns;

        -- SUBTRACT: 12 - 05 = 0D
        OP <= "101";
        wait for 20 ns;

        -- Pass A: output = 55
        A <= x"55";
        B <= x"AA";
        OP <= "110";
        wait for 20 ns;

        -- Pass B: output = AA
        OP <= "111";
        wait for 20 ns;

        -- Hold the register value
        LOAD <= '0';
        wait for 20 ns;

        assert false
            report "ALU testbench completed"
            severity note;

        wait;
    end process;

end Behavioral;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit_tb is
end register_8bit_tb;

architecture Behavioral of register_8bit_tb is

    component register_8bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            LOAD  : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR(7 downto 0);
            Q     : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal D     : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal Q     : STD_LOGIC_VECTOR(7 downto 0);

begin

    UUT: register_8bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => LOAD,
            D     => D,
            Q     => Q
        );

    -- Clock generation
    CLK <= not CLK after 5 ns;

    -- Test cases
    process
    begin

        -- Test 1: Reset
        RESET <= '1';
        LOAD <= '0';
        D <= "10101010";
        wait for 10 ns;

        -- Test 2: Load 10101010
        RESET <= '0';
        LOAD <= '1';
        D <= "10101010";
        wait for 10 ns;

        -- Test 3: Load 11001100
        D <= "11001100";
        wait for 10 ns;

        -- Test 4: Hold previous value
        LOAD <= '0';
        D <= "11110000";
        wait for 10 ns;

        -- Test 5: Load 11110000
        LOAD <= '1';
        wait for 10 ns;

        -- Test 6: Reset again
        RESET <= '1';
        LOAD <= '0';
        wait for 10 ns;

        wait;

    end process;

end Behavioral;
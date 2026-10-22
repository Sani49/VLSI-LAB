
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_8bit_tb is
end cpu_8bit_tb;

architecture Behavioral of cpu_8bit_tb is

    component cpu_8bit
        Port (
            CLK    : in  STD_LOGIC;
            RESET  : in  STD_LOGIC;
            Q      : out STD_LOGIC_VECTOR(7 downto 0);
            Z      : out STD_LOGIC;
            PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    signal CLK    : STD_LOGIC := '0';
    signal RESET  : STD_LOGIC := '1';
    signal Q      : STD_LOGIC_VECTOR(7 downto 0);
    signal Z      : STD_LOGIC;
    signal PC_OUT : STD_LOGIC_VECTOR(3 downto 0);

begin

    DUT: cpu_8bit
        port map (
            CLK    => CLK,
            RESET  => RESET,
            Q      => Q,
            Z      => Z,
            PC_OUT => PC_OUT
        );

    -- 10 ns clock period
    CLK <= not CLK after 5 ns;

    STIMULUS: process
    begin

        -- Reset CPU
        RESET <= '1';
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"00"
            report "FAIL: Reset ACC should be 00"
            severity error;

        assert Z = '1'
            report "FAIL: Reset Z should be 1"
            severity error;

        assert PC_OUT = "0000"
            report "FAIL: Reset PC should be 0"
            severity error;

        RESET <= '0';

        -- Address 0: LDI 0F
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"0F"
            report "FAIL: LDI 0F"
            severity error;

        assert Z = '0' and PC_OUT = "0001"
            report "FAIL: After LDI"
            severity error;

        -- Address 1: OR A0
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"AF"
            report "FAIL: OR A0"
            severity error;

        assert Z = '0' and PC_OUT = "0010"
            report "FAIL: After OR A0"
            severity error;

        -- Address 2: NOT
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"50"
            report "FAIL: NOT"
            severity error;

        assert Z = '0' and PC_OUT = "0011"
            report "FAIL: After NOT"
            severity error;

        -- Address 3: SHR
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"28"
            report "FAIL: First SHR"
            severity error;

        assert Z = '0' and PC_OUT = "0100"
            report "FAIL: After first SHR"
            severity error;

        -- Address 4: ADD D8
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"00"
            report "FAIL: ADD D8"
            severity error;

        assert Z = '1' and PC_OUT = "0101"
            report "FAIL: After ADD D8"
            severity error;

        -- Address 5: OR 81
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"81"
            report "FAIL: OR 81"
            severity error;

        assert Z = '0' and PC_OUT = "0110"
            report "FAIL: After OR 81"
            severity error;

        -- Address 6: SHR
        wait until rising_edge(CLK);
        wait for 1 ns;

        assert Q = x"40"
            report "FAIL: Final SHR"
            severity error;

        assert Z = '0' and PC_OUT = "0111"
            report "FAIL: After final SHR"
            severity error;

        report "PASS: CPU Set 5 test completed"
            severity note;

        wait;
    end process;

end Behavioral;
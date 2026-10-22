
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity zero_flag is
    Port (
        CLK       : in  STD_LOGIC;
        RESET     : in  STD_LOGIC;
        LOAD      : in  STD_LOGIC;
        RESULT_IN : in  STD_LOGIC_VECTOR(7 downto 0);
        Z_OUT     : out STD_LOGIC
    );
end zero_flag;

architecture Structural of zero_flag is

    component master_slave_ff
        Port (
            D   : in  STD_LOGIC;
            CLK : in  STD_LOGIC;
            Q   : out STD_LOGIC;
            Q_n : out STD_LOGIC
        );
    end component;

    signal Z_NEXT : STD_LOGIC;
    signal Z_INT  : STD_LOGIC;
    signal Z_N    : STD_LOGIC;

begin

    process(RESET, LOAD, RESULT_IN, Z_INT)
    begin
        if RESET = '1' then
            Z_NEXT <= '1';

        elsif LOAD = '1' then
            if RESULT_IN = x"00" then
                Z_NEXT <= '1';
            else
                Z_NEXT <= '0';
            end if;

        else
            Z_NEXT <= Z_INT;
        end if;
    end process;

    Z_REGISTER: master_slave_ff
        port map (
            D   => Z_NEXT,
            CLK => CLK,
            Q   => Z_INT,
            Q_n => Z_N
        );

    Z_OUT <= Z_INT;

end Structural;
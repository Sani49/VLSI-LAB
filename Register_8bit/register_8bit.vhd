library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        LOAD  : in  STD_LOGIC;
        D     : in  STD_LOGIC_VECTOR(7 downto 0);
        Q     : out STD_LOGIC_VECTOR(7 downto 0)
    );
end register_8bit;

architecture Structural of register_8bit is

    component master_slave_ff
        Port (
            D     : in  STD_LOGIC;
            CLK   : in  STD_LOGIC;
            Q     : out STD_LOGIC;
            Q_n   : out STD_LOGIC
        );
    end component;

    signal D_next  : STD_LOGIC_VECTOR(7 downto 0);
    signal Q_int   : STD_LOGIC_VECTOR(7 downto 0);
    signal Q_n_int : STD_LOGIC_VECTOR(7 downto 0);

begin

    -- Next-state logic
    -- RESET = 1          -> D_next = 00000000
    -- RESET = 0, LOAD=1  -> D_next = D
    -- RESET = 0, LOAD=0  -> D_next = Q_int (hold)

    D_next <= (others => '0') when RESET = '1' else
              D                 when LOAD  = '1' else
              Q_int;

    -- 8 Master-Slave Flip-Flops

    FF0: master_slave_ff
        port map (
            D   => D_next(0),
            CLK => CLK,
            Q   => Q_int(0),
            Q_n => Q_n_int(0)
        );

    FF1: master_slave_ff
        port map (
            D   => D_next(1),
            CLK => CLK,
            Q   => Q_int(1),
            Q_n => Q_n_int(1)
        );

    FF2: master_slave_ff
        port map (
            D   => D_next(2),
            CLK => CLK,
            Q   => Q_int(2),
            Q_n => Q_n_int(2)
        );

    FF3: master_slave_ff
        port map (
            D   => D_next(3),
            CLK => CLK,
            Q   => Q_int(3),
            Q_n => Q_n_int(3)
        );

    FF4: master_slave_ff
        port map (
            D   => D_next(4),
            CLK => CLK,
            Q   => Q_int(4),
            Q_n => Q_n_int(4)
        );

    FF5: master_slave_ff
        port map (
            D   => D_next(5),
            CLK => CLK,
            Q   => Q_int(5),
            Q_n => Q_n_int(5)
        );

    FF6: master_slave_ff
        port map (
            D   => D_next(6),
            CLK => CLK,
            Q   => Q_int(6),
            Q_n => Q_n_int(6)
        );

    FF7: master_slave_ff
        port map (
            D   => D_next(7),
            CLK => CLK,
            Q   => Q_int(7),
            Q_n => Q_n_int(7)
        );

    -- Register output
    Q <= Q_int;

end Structural;
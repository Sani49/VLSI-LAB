
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_8bit is
    Port (
        CLK    : in  STD_LOGIC;
        RESET  : in  STD_LOGIC;
        Q      : out STD_LOGIC_VECTOR(7 downto 0);
        Z      : out STD_LOGIC;
        PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
    );
end cpu_8bit;

architecture Structural of cpu_8bit is

    component program_counter
        Port (
            CLK    : in  STD_LOGIC;
            RESET  : in  STD_LOGIC;
            ENABLE : in  STD_LOGIC;
            PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    component program_rom
        Port (
            ADDR        : in  STD_LOGIC_VECTOR(3 downto 0);
            INSTRUCTION : out STD_LOGIC_VECTOR(11 downto 0)
        );
    end component;

    component control_unit
        Port (
            OPCODE   : in  STD_LOGIC_VECTOR(3 downto 0);
            ALU_OP   : out STD_LOGIC_VECTOR(2 downto 0);
            ACC_LOAD : out STD_LOGIC;
            Z_LOAD   : out STD_LOGIC
        );
    end component;

    component cpu_alu_set5
        Port (
            ACC    : in  STD_LOGIC_VECTOR(7 downto 0);
            IMM    : in  STD_LOGIC_VECTOR(7 downto 0);
            ALU_OP : in  STD_LOGIC_VECTOR(2 downto 0);
            RESULT : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component accumulator
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            LOAD  : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR(7 downto 0);
            Q     : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component zero_flag
        Port (
            CLK       : in  STD_LOGIC;
            RESET     : in  STD_LOGIC;
            LOAD      : in  STD_LOGIC;
            RESULT_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            Z_OUT     : out STD_LOGIC
        );
    end component;

    signal PC_SIGNAL    : STD_LOGIC_VECTOR(3 downto 0);
    signal INSTR_SIGNAL : STD_LOGIC_VECTOR(11 downto 0);
    signal ALU_OP_SIGNAL: STD_LOGIC_VECTOR(2 downto 0);
    signal ACC_LOAD_SIG : STD_LOGIC;
    signal Z_LOAD_SIG   : STD_LOGIC;
    signal ACC_SIGNAL   : STD_LOGIC_VECTOR(7 downto 0);
    signal RESULT_SIGNAL: STD_LOGIC_VECTOR(7 downto 0);
    signal Z_SIGNAL     : STD_LOGIC;

begin

    PC_UNIT: program_counter
        port map (
            CLK    => CLK,
            RESET  => RESET,
            ENABLE => '1',
            PC_OUT => PC_SIGNAL
        );

    ROM_UNIT: program_rom
        port map (
            ADDR        => PC_SIGNAL,
            INSTRUCTION => INSTR_SIGNAL
        );

   CU_INSTANCE: control_unit
    port map (
        OPCODE   => INSTR_SIGNAL(11 downto 8),
        ALU_OP   => ALU_OP_SIGNAL,
        ACC_LOAD => ACC_LOAD_SIG,
        Z_LOAD   => Z_LOAD_SIG
    );

    ALU_UNIT: cpu_alu_set5
        port map (
            ACC    => ACC_SIGNAL,
            IMM    => INSTR_SIGNAL(7 downto 0),
            ALU_OP => ALU_OP_SIGNAL,
            RESULT => RESULT_SIGNAL
        );

    ACC_UNIT: accumulator
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => ACC_LOAD_SIG,
            D     => RESULT_SIGNAL,
            Q     => ACC_SIGNAL
        );

    ZERO_FLAG_UNIT: zero_flag
        port map (
            CLK       => CLK,
            RESET     => RESET,
            LOAD      => Z_LOAD_SIG,
            RESULT_IN => RESULT_SIGNAL,
            Z_OUT     => Z_SIGNAL
        );

    Q      <= ACC_SIGNAL;
    Z      <= Z_SIGNAL;
    PC_OUT <= PC_SIGNAL;

end Structural;
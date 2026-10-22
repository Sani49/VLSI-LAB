
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_alu_set5 is
    Port (
        ACC      : in  STD_LOGIC_VECTOR(7 downto 0);
        IMM      : in  STD_LOGIC_VECTOR(7 downto 0);
        ALU_OP   : in  STD_LOGIC_VECTOR(2 downto 0);
        RESULT   : out STD_LOGIC_VECTOR(7 downto 0)
    );
end cpu_alu_set5;

architecture Structural of cpu_alu_set5 is

    component adder_8bit
        Port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            CIN  : in  STD_LOGIC;
            SUM  : out STD_LOGIC_VECTOR(7 downto 0);
            COUT : out STD_LOGIC
        );
    end component;

    component or_gate
        Port (
            A : in  STD_LOGIC;
            B : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component not_gate
        Port (
            A : in  STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal ADD_RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal OR_RESULT  : STD_LOGIC_VECTOR(7 downto 0);
    signal NOT_RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal CARRY_OUT  : STD_LOGIC;

begin

    ADDER_UNIT: adder_8bit
        port map (
            A    => ACC,
            B    => IMM,
            CIN  => '0',
            SUM  => ADD_RESULT,
            COUT => CARRY_OUT
        );

    OR_BITS: for i in 0 to 7 generate
        OR_UNIT: or_gate
            port map (
                A => ACC(i),
                B => IMM(i),
                Y => OR_RESULT(i)
            );
    end generate;

    NOT_BITS: for i in 0 to 7 generate
        NOT_UNIT: not_gate
            port map (
                A => ACC(i),
                Y => NOT_RESULT(i)
            );
    end generate;

    process(ACC, IMM, ALU_OP, ADD_RESULT,
            OR_RESULT, NOT_RESULT)
    begin
        case ALU_OP is

            when "000" =>
                RESULT <= IMM; -- LDI

            when "001" =>
                RESULT <= ADD_RESULT; -- ADD

            when "010" =>
                RESULT <= OR_RESULT; -- OR

            when "011" =>
                RESULT <= NOT_RESULT; -- NOT

            when "100" =>
                RESULT <= '0' & ACC(7 downto 1); -- SHR

            when others =>
                RESULT <= ACC;

        end case;
    end process;

end Structural;
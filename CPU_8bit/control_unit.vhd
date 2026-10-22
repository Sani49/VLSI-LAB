
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    Port (
        OPCODE   : in  STD_LOGIC_VECTOR(3 downto 0);
        ALU_OP   : out STD_LOGIC_VECTOR(2 downto 0);
        ACC_LOAD : out STD_LOGIC;
        Z_LOAD   : out STD_LOGIC
    );
end control_unit;

architecture Behavioral of control_unit is
begin

    process(OPCODE)
    begin
        ALU_OP   <= "000";
        ACC_LOAD <= '0';
        Z_LOAD   <= '0';

        case OPCODE is

            when "0001" => -- LDI
                ALU_OP   <= "000";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "0010" => -- ADD
                ALU_OP   <= "001";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "0101" => -- OR
                ALU_OP   <= "010";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "0111" => -- NOT
                ALU_OP   <= "011";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "1001" => -- SHR
                ALU_OP   <= "100";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when others =>
                null; -- NOP

        end case;
    end process;

end Behavioral;
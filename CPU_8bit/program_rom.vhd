
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity program_rom is
    Port (
        ADDR        : in  STD_LOGIC_VECTOR(3 downto 0);
        INSTRUCTION : out STD_LOGIC_VECTOR(11 downto 0)
    );
end program_rom;

architecture Behavioral of program_rom is
begin

    process(ADDR)
    begin
        case ADDR is
            when "0000" => INSTRUCTION <= x"10F"; -- LDI 0F
            when "0001" => INSTRUCTION <= x"5A0"; -- OR A0
            when "0010" => INSTRUCTION <= x"700"; -- NOT
            when "0011" => INSTRUCTION <= x"900"; -- SHR
            when "0100" => INSTRUCTION <= x"2D8"; -- ADD D8
            when "0101" => INSTRUCTION <= x"581"; -- OR 81
            when "0110" => INSTRUCTION <= x"900"; -- SHR

            when others => INSTRUCTION <= x"000"; -- NOP
        end case;
    end process;

end Behavioral;
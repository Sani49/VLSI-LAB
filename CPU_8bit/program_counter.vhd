
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_counter is
    Port (
        CLK    : in  STD_LOGIC;
        RESET  : in  STD_LOGIC;
        ENABLE : in  STD_LOGIC;
        PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
    );
end program_counter;

architecture Behavioral of program_counter is
    signal PC_REG : unsigned(3 downto 0) := (others => '0');
begin

    process(CLK)
    begin
        if rising_edge(CLK) then
            if RESET = '1' then
                PC_REG <= (others => '0');
            elsif ENABLE = '1' then
                PC_REG <= PC_REG + 1;
            end if;
        end if;
    end process;

    PC_OUT <= std_logic_vector(PC_REG);

end Behavioral;
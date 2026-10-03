library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity accumulator_4bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        A     : in  STD_LOGIC_VECTOR(3 downto 0);
        B     : in  STD_LOGIC_VECTOR(3 downto 0);
        Q     : out STD_LOGIC_VECTOR(3 downto 0)
    );
end accumulator_4bit;

architecture Structural of accumulator_4bit is

    -- Component Declaration: 4-bit Adder
    component adder_4bit is
        Port (
            A    : in  STD_LOGIC_VECTOR(3 downto 0);
            B    : in  STD_LOGIC_VECTOR(3 downto 0);
            Cin  : in  STD_LOGIC;
            Sum  : out STD_LOGIC_VECTOR(3 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    -- Component Declaration: 4-bit Register
    component register_4bit is
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR(3 downto 0);
            Q     : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    -- Internal signal to connect Adder Output to Register Input
    signal sum_internal : STD_LOGIC_VECTOR(3 downto 0);
    signal carry_dummy  : STD_LOGIC;

begin

    -- Instantiate 4-bit Adder
    U1_ADDER: adder_4bit
        port map (
            A    => A,
            B    => B,
            Cin  => '0',
            Sum  => sum_internal,
            Cout => carry_dummy
        );

    -- Instantiate 4-bit Register
    U2_REGISTER: register_4bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            D     => sum_internal,
            Q     => Q
        );

end Structural;
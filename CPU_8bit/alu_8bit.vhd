
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit is
    Port (
        A      : in  STD_LOGIC_VECTOR(7 downto 0);
        B      : in  STD_LOGIC_VECTOR(7 downto 0);
        OP     : in  STD_LOGIC_VECTOR(2 downto 0);
        CLK    : in  STD_LOGIC;
        RESET  : in  STD_LOGIC;
        LOAD   : in  STD_LOGIC;
        RESULT : out STD_LOGIC_VECTOR(7 downto 0);
        COUT   : out STD_LOGIC
    );
end alu_8bit;

architecture Structural of alu_8bit is

    component and_gate
        Port (
            A, B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component or_gate
        Port (
            A, B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component xor_gate
        Port (
            A, B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component not_gate
        Port (
            A : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component adder_8bit
        Port (
            A, B : in STD_LOGIC_VECTOR(7 downto 0);
            CIN : in STD_LOGIC;
            SUM : out STD_LOGIC_VECTOR(7 downto 0);
            COUT : out STD_LOGIC
        );
    end component;

    component register_8bit
        Port (
            CLK, RESET, LOAD : in STD_LOGIC;
            D : in STD_LOGIC_VECTOR(7 downto 0);
            Q : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal and_result : STD_LOGIC_VECTOR(7 downto 0);
    signal or_result  : STD_LOGIC_VECTOR(7 downto 0);
    signal xor_result : STD_LOGIC_VECTOR(7 downto 0);
    signal not_result : STD_LOGIC_VECTOR(7 downto 0);

    signal add_b : STD_LOGIC_VECTOR(7 downto 0);
    signal add_sum : STD_LOGIC_VECTOR(7 downto 0);
    signal add_cin, add_cout : STD_LOGIC;

    signal selected_result : STD_LOGIC_VECTOR(7 downto 0);
    signal registered_result : STD_LOGIC_VECTOR(7 downto 0);

begin

    -- Eight-bit logic operations using existing gates
    GATES: for i in 0 to 7 generate

        G1: and_gate
            port map (A => A(i), B => B(i),
                      Y => and_result(i));

        G2: or_gate
            port map (A => A(i), B => B(i),
                      Y => or_result(i));

        G3: xor_gate
            port map (A => A(i), B => B(i),
                      Y => xor_result(i));

        G4: not_gate
            port map (A => A(i), Y => not_result(i));

    end generate;

    -- Addition and subtraction using existing 8-bit adder
    add_b <= not B when OP = "101" else B;

    add_cin <= '1' when OP = "101" else '0';

    ADDER: adder_8bit
        port map (
            A => A,
            B => add_b,
            CIN => add_cin,
            SUM => add_sum,
            COUT => add_cout
        );

    -- Select the ALU operation
    process(OP, and_result, or_result, xor_result,
            not_result, add_sum, A, B)
    begin
        case OP is

            when "000" =>
                selected_result <= and_result;

            when "001" =>
                selected_result <= or_result;

            when "010" =>
                selected_result <= xor_result;

            when "011" =>
                selected_result <= not_result;

            when "100" =>
                selected_result <= add_sum;

            when "101" =>
                selected_result <= add_sum;

            when "110" =>
                selected_result <= A;

            when others =>
                selected_result <= B;

        end case;
    end process;

    -- Store the ALU result in the existing 8-bit register
    REG: register_8bit
        port map (
            CLK => CLK,
            RESET => RESET,
            LOAD => LOAD,
            D => selected_result,
            Q => registered_result
        );

    RESULT <= registered_result;

    COUT <= add_cout when (OP = "100" or OP = "101")
            else '0';

end Structural;
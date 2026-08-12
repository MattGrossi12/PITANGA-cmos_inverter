module inv(
    //Entradas:
    input A,            // Entrada do Inversor

    //Saídas:
    output reg A_b,     // Saída do Inversor
    output reg A_s      // Replica visualmente a entrada
);

always @(*)
    begin
        A_b = !A;       // Inverte a entrada
        A_s = A;        // Armazena a entrada
    end

endmodule: inv
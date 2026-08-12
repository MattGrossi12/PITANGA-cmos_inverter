//                                            (c) 2025 inPlace Design Automation
// Descrição : arquivo de pinagem contendo o mapeamento do módulo counter2b para
//             a placa T (T-board).
//  MODULE PORT     BOARD COMPONENT
    A         =   btn0;
    
    /*
    clk         =   clk_1hz;
    set         =   btn1;
    cen         =   sw0;
    blk         =   segd0.dp_on;
    */

// Mapeamento dos bits de saída do contador para os LEDs
    A_s      =   led0;
    A_b      =   led1;

// Mapeamento dos bits de saída do decodificador para o display de 7 segmentos
    /*
    dp7[0]      =   segd0.g_on;
    dp7[1]      =   segd0.f_on;
    dp7[2]      =   segd0.e_on;
    dp7[3]      =   segd0.d_on;
    dp7[4]      =   segd0.c_on;
    dp7[5]      =   segd0.b_on;
    dp7[6]      =   segd0.a_on;
    */
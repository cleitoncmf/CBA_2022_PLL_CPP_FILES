#ifndef SIN_GEN_X64_B_
#define SIN_GEN_X64_B_


// Para funções trigonométricas
#include "hls_math.h"

// biblioteca usada para ponto fixo
#include <ap_fixed.h>

//para "arbitrary precision" em C++
#include "ap_int.h" 


// Fixed-point de 32 bits, com 7 bits a esquerda do ponto.
typedef  ap_fixed<64,16, AP_TRN, AP_WRAP> data_t;

// Bit para servir de trigger da interrupção
typedef ap_uint<1> uint1_t;

//Definições
#define Ts data_t(500e-9)
#define Ts2 data_t(500e-9)
#define pi data_t(3.141592653589793)
#define pi2 data_t(6.283185307179586)
#define pi2Ts data_t(3.14159265358979e-6)

// Cabeçalho
void sin_gen_x64_B(uint1_t sinc, data_t A, data_t f, data_t Ang, data_t *vout, data_t *vqout, data_t *wtout)
data_t sin_2000(data_t theta);
data_t cos_2000(data_t theta);







#endif

#include <LedControl.h>

// VECTOR PARA LAS FILAS CON SU NUMERO DE PIN
const byte row[8] = {22, 24, 26, 28, 30, 32, 34, 36};
// VECTOR PARA LAS COLUMNAS CON SU NUMERO DE PIN
const byte column[8] = {38, 40, 42, 44, 46, 48, 50, 52};

// LedControl(DATA, CLK, CS, NoDEVICE)
// LedControl matrix = LedControl(2, 3, 4, 1);
/* 
 *  1  2  3  4  5  6  7  8  9 10 11 13 14 15 16 17 18 19 20 21 22 24
 *  G  1  7  -  S  E  C  C  I  O  N  A  -  P  R  A  C  T  I  C  A  1 
 *  A C E G I N O P R S 1 7
*/
const int letra_A[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_C[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_E[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_G[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_I[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_N[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 1, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 1, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 1, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_O[8][8] =    {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 1, 1, 1, 1, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 0, 1, 1, 1, 1, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_P[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 1, 1, 1, 1, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_R[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 1, 1, 1, 1, 0, 0}, 
                                {0, 1, 0, 1, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 1, 1, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_T[8][8] =    {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int letra_S[8][8] =    {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 1, 1, 1, 1, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 1, 0}, 
                                {0, 1, 1, 1, 1, 1, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int num_1[8][8]   =    {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 1, 0, 0, 0}, 
                                {0, 0, 1, 0, 1, 0, 0, 0}, 
                                {0, 0, 0, 0, 1, 0, 0, 0}, 
                                {0, 0, 0, 0, 1, 0, 0, 0}, 
                                {0, 0, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int num_7[8][8]   =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 1, 0, 0}, 
                                {0, 0, 0, 0, 1, 0, 0, 0}, 
                                {0, 0, 0, 1, 0, 0, 0, 0}, 
                                {0, 0, 1, 0, 0, 0, 0, 0}, 
                                {0, 0, 1, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int guion[8][8]   =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 1, 1, 1, 1, 1, 1, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };

const int espacio[8][8] =   {
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}, 
                                {0, 0, 0, 0, 0, 0, 0, 0}
                            };


int modo = 0; // 0: MENSAJE | 1: JUEGO
int direccion = 0; // 0:HACIA ARRIBA | 1: HACIA ABAJO
int speedIntro = 200; // VELOCIDAD DE MENSAJE
int top = 0; // AREA A EXTRAER
int letra = 0; // LETRA ACTUAL

void setup() {
    // INICIALIZAR PINES DE MATRIZ COMO SALIDA
    for (int i = 0; i < 8; i++) {
        pinMode(row[i], OUTPUT);
        pinMode(column[i], OUTPUT);

        // HIGH (CATODO) | LOW (ANODO)
        digitalWrite(row[i], LOW);
        digitalWrite(column[i], HIGH);
    }

    // matrix.shutdown(0, false);
    // matrix.setIntensity(0, 8);
    // matrix.clearDisplay(0);
}

void loop() {
    if (modo == 0) {
        mensaje();
    }
}

/*
 * G17-SECCION A-PRACTICA 1
 */
void mensaje() {
    int caracter[8][8]          = {
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}
                                };

    int caracter_driver[8][8]   = {
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}, 
                                    {0, 0, 0, 0, 0, 0, 0, 0}
                                };


    int row_aux = 0; // CONTADOR DE FILA DE SIGUIENTE LETRA
    
    for (int i = 0, row = top; i < 8; i++, row++) {
        for (int j = 0; j < 8; j++) {
            switch (letra) {
                case 0: // LETRA G
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_G[row][j];
                        // caracter_driver[i][j] = num_1[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = num_1[row_aux][j];
                        // caracter_driver[i][j] = num_7[row_aux][j];
                    }
                    break;
                }
                case 1: // LETRA 1
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = num_1[row][j];
                        // caracter_driver[i][j] = num_7[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = num_7[row_aux][j];
                        // caracter_driver[i][j] = guion[row_aux][j];
                    }
                    break;
                }
                case 2: // LETRA 7
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = num_7[row][j];
                        // caracter_driver[i][j] = guion[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = guion[row_aux][j];
                        // caracter_driver[i][j] = letra_S[row_aux][j];
                    }
                    break;
                }
                case 3: // LETRA -
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = guion[row][j];
                        // caracter_driver[i][j] = letra_S[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_S[row_aux][j];
                        // caracter_driver[i][j] = letra_E[row_aux][j];
                    }
                    break;
                }
                case 4: // LETRA S
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_S[row][j];
                        // caracter_driver[i][j] = letra_E[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_E[row_aux][j];
                        // caracter_driver[i][j] = letra_C[row_aux][j];
                    }
                    break;
                }
                case 5: // LETRA E
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_E[row][j];
                        // caracter_driver[i][j] = letra_C[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_C[row_aux][j];
                        // caracter_driver[i][j] = letra_C[row_aux][j];
                    }
                    break;
                }
                case 6: // LETRA C
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_C[row][j];
                        // caracter_driver[i][j] = letra_C[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_C[row_aux][j];
                        // caracter_driver[i][j] = letra_I[row_aux][j];
                    }
                    break;
                }
                case 7: // LETRA C
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_C[row][j];
                        // caracter_driver[i][j] = letra_I[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_I[row_aux][j];
                        // caracter_driver[i][j] = letra_O[row_aux][j];
                    }
                    break;
                }
                case 8: // LETRA I
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_I[row][j];
                        // caracter_driver[i][j] = letra_O[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_O[row_aux][j];
                        // caracter_driver[i][j] = letra_N[row_aux][j];
                    }
                    break;
                }
                case 9: // LETRA O
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_O[row][j];
                        // caracter_driver[i][j] = letra_N[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_N[row_aux][j];
                        // caracter_driver[i][j] = espacio[row_aux][j];
                    }
                    break;
                }
                case 10: // LETRA N
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_N[row][j];
                        // caracter_driver[i][j] = espacio[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = espacio[row_aux][j];
                        // caracter_driver[i][j] = letra_A[row_aux][j];
                    }
                    break;
                }
                case 11: // LETRA 
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = espacio[row][j];
                        // caracter_driver[i][j] = letra_A[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_A[row_aux][j];
                        // caracter_driver[i][j] = guion[row_aux][j];
                    }
                    break;
                }
                case 12: // LETRA A
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_A[row][j];
                        // caracter_driver[i][j] = guion[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = guion[row_aux][j];
                        // caracter_driver[i][j] = letra_P[row_aux][j];
                    }
                    break;
                }
                case 13: // LETRA -
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = guion[row][j];
                        // caracter_driver[i][j] = letra_P[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_P[row_aux][j];
                        // caracter_driver[i][j] = letra_R[row_aux][j];
                    }
                    break;
                }
                case 14: // LETRA P
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_P[row][j];
                        // caracter_driver[i][j] = letra_R[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_R[row_aux][j];
                        // caracter_driver[i][j] = letra_A[row_aux][j];
                    }
                    break;
                }
                case 15: // LETRA R
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_R[row][j];
                        // caracter_driver[i][j] = letra_A[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_R[row_aux][j];
                        // caracter_driver[i][j] = letra_C[row_aux][j];
                    }
                    break;
                }
                case 16: // LETRA A
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_A[row][j];
                        // caracter_driver[i][j] = letra_C[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_C[row_aux][j];
                        // caracter_driver[i][j] = letra_T[row_aux][j];
                    }
                    break;
                }
                case 17: // LETRA C
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_C[row][j];
                        // caracter_driver[i][j] = letra_T[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_T[row_aux][j];
                        // caracter_driver[i][j] = letra_I[row_aux][j];
                    }
                    break;
                }
                case 18: // LETRA T
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_T[row][j];
                        // caracter_driver[i][j] = letra_I[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_I[row_aux][j];
                        // caracter_driver[i][j] = letra_C[row_aux][j];
                    }
                    break;
                }
                case 19: // LETRA I
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_I[row][j];
                        // caracter_driver[i][j] = letra_C[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_C[row_aux][j];
                        // caracter_driver[i][j] = letra_A[row_aux][j];
                    }
                    break;
                }
                case 20: // LETRA C
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_C[row][j];
                        // caracter_driver[i][j] = letra_A[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_A[row_aux][j];
                        // caracter_driver[i][j] = espacio[row_aux][j];
                    }
                    break;
                }
                case 21: // LETRA A
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = letra_A[row][j];
                        // caracter_driver[i][j] = espacio[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = espacio[row_aux][j];
                        // caracter_driver[i][j] = num_1[row_aux][j];
                    }
                    break;
                }
                case 22: // LETRA 
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = espacio[row][j];
                        // caracter_driver[i][j] = num_1[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = num_1[row_aux][j];
                        // caracter_driver[i][j] = espacio[row_aux][j];
                    }
                    break;
                }
                case 23: // LETRA 1
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = num_1[row][j];
                        // caracter_driver[i][j] = espacio[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = espacio[row_aux][j];
                        // caracter_driver[i][j] = letra_G[row_aux][j];
                    }
                    break;
                }
                case 24: // LETRA 
                {
                    if (row < 8) {
                        // LETRA ACTUAL
                        caracter[i][j] = espacio[row][j];
                        // caracter_driver[i][j] = letra_G[row][j];
                    }
                    else {
                        // SIGUIENTE LETRA
                        caracter[i][j] = letra_G[row_aux][j];
                        // caracter_driver[i][j] = num_1[row_aux][j];
                    }
                    break;
                }
            }
        }
        if (row >= 8) {
            row_aux++;
        }
    }

    caracter_aMano(caracter);
    // caracter_conDriver(caracter_driver);
    
    if (direccion == 0) {
        // HACIA ARRIBA
        top++;
        if (top > 7) {
            top = 0;
            if (letra == 24) letra = 0;
            else letra ++;
        }
    }
    else {
        // HACIA ABAJO
        top--;
        if (top < 0) {
            top = 0;
            if (letra == 0) letra = 24;
            else letra--;
        }
    }
}

void caracter_aMano(int caracter[][8]) {
    for (int i = 0; i < 8; i++) {
        digitalWrite(row[i], HIGH);
        for (int j = 0; j < 8; j++) {
            if (caracter[j][i] == 1) {
                digitalWrite(column[j], LOW); 
            }
        }
        delay(2);
        digitalWrite(row[i], LOW);
        for (int j = 0; j < 8; j++) {
            digitalWrite(column[j], HIGH);
        }
    }
    delay(speedIntro);
}

void caracter_conDriver(int caracter[][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (caracter[i][j] == 1) {
                // TODO: matrix.setLed(number, row, column, state);
                // matrix.setLed(0, j, i, LOW);
            }
        }
        delay(2);
    }
    delay(speedIntro);
}

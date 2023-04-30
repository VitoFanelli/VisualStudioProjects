// CORSO DI PROGRAMMAZIONE 1 UNIPEGASO

// librerie
#include <stdio.h>
#include <stdlib.h>

// moduli
#include "./moduli/01_compilazione.h"
#include "./moduli/02_input_output.h"
#include "./moduli/03_aritmetica.h"
#include "./moduli/04_selezione.h"

// ... dichiarazione variabili globali

// procedura principale del programma
void main ( void )
{

    printf ( "\tBenvenuto al corso di Programmazione 1 di Unipegaso.\n\n" ) ;

    // 01. Compilazione
    compilazione();
    
    // 02. Input & Output
    input_output();

    // 03. Aritmetica
    aritmetica();
    
    // 04. Selezione
    selezione();
    
    // evita chiusura immediata del prompt
    system("pause");

}
// fine del programma (main)

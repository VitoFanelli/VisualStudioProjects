// CORSO DI PROGRAMMAZIONE 1 UNIPEGASO

// librerie
#include <stdio.h>
#include <stdlib.h>

// moduli
#include "./moduli/00_scelta_modulo.h"
#include "./moduli/01_compilazione.h"
#include "./moduli/02_input_output.h"
#include "./moduli/03_aritmetica.h"
#include "./moduli/04_selezione.h"

// ... dichiarazione variabili globali

// procedura principale del programma
void main ( void )
{

    puts ( "\tBenvenuto al corso di Programmazione 1 di Unipegaso.\n" ) ;

    // 00. Scelta del modulo
    int lezione = scelta_modulo();

    while ( lezione != 0 )
    {
        switch ( lezione )
        {
            // 01. Compilazione
            case 1 :
                printf ( "%s", "\n" ) ;
                compilazione();
                break ;
        
            // 02. Input & Output
            case 2 :
                printf ( "%s", "\n" ) ;
                input_output();
                break ;

            // 03. Aritmetica
            case 3 :
                printf ( "%s", "\n" ) ;
                aritmetica();
                break ;
        
            // 04. Selezione
            case 4 :
                printf ( "%s", "\n" ) ;
                selezione();
                break ;

            default :
                printf ( "%s", "\n" ) ;
                puts ( "\tLezione non disponibile.\n" ) ;
                break ;

        }

        lezione = scelta_modulo();

    }

    // evita chiusura immediata del prompt
    system("pause");

}
// fine del programma (main)

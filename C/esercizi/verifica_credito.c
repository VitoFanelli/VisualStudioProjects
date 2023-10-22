// verifica del credito sul conto

#include <stdio.h>

void main ( void )
{   
    int saldo, debiti, crediti ;
    int limite = 10000 ;

    // saldo iniziale
    puts ( "\tInserisci il tuo saldo: " ) ;
    scanf ( "%d", &saldo ) ;

    while (saldo <= limite)
    {
        // debiti
        puts ( "\tInserisci il totale debiti: " ) ;
        scanf ( "%d", &debiti ) ;

        // crediti
        puts ( "\tInserisci il totale crediti: " ) ;
        scanf ( "%d", &crediti ) ;

        // saldo corrente
        saldo = saldo - debiti + crediti ;

        // stampa
        printf ( "\tIl limite e' %d euro.\n", limite ) ;
        printf ( "\tIl saldo e' %d euro.\n", saldo ) ;

        if ( saldo > limite) puts ( "\tLimite di credito superato." ) ;
        else puts ( "\tLimite di credito non superato.\n" ) ;
    }
}
// fine

// 05. ITERAZIONE

void iterazione ( void )
{

    // titolo
    puts ( "\t5. L' iterazione\n" ) ;

    puts ( "\t\tCi sono tre istruzioni di iterazione principali: while, do while e for.\n" ) ;

    // while
    puts ( "\t\tIl while esegue le istruzioni all'interno del corpo fino a che risulta vera" ) ;
    puts ( "\t\tla condizione specificata all'interno delle parentesi tonde." ) ;
    puts ( "\t\tSi puo' implementare un ciclo while controllato da contatore o da sentinella.\n" ) ;

    // contatore
    int conta = 0;
    int numero = 0;
    printf ( "%s", "\t\tStampa i numeri fino a (contatore): " ) ;
    scanf ( "%d", &conta ) ;
    while ( numero <= conta )
    {
        printf ( "\t\t%d\n", numero ) ;
        numero++ ;
    }

    // do while

    // for
    

}
// fine

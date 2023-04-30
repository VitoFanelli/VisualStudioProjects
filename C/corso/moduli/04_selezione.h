// 04. SELEZIONE

void selezione ( void )
{
    
    // titolo
    printf ( "\t4. La selezione\n\n" ) ;

    int numero1, numero2 ;

    printf ( "\t\tInserisci il primo numero: " ) ;
    scanf ( "%d", &numero1 ) ;

    printf ( "\t\tInserisci il secondo numero: " ) ;
    scanf ( "%d", &numero2 ) ;

    // selezione singola
    puts ( "\t\tLa selezione 'singola' prevede l'utilizzo di un singolo 'if'." ) ;
    puts ( "\t\tLe istruzioni nel suo corpo vengono eseguite solo se la condizione risulta vera:\n" ) ;

    if ( numero1 == numero2 ) puts ( "\t\ti due numeri sono uguali.\n" ) ;
    if ( numero1 != numero2 ) puts ( "\t\ti due numeri sono diversi.\n" ) ;

    // selezione doppia
    puts ( "\t\tLa selezione 'doppia' prevede l'utilizzo di 'if' e di 'else'." ) ;
    puts ( "\t\tLe istruzioni nel corpo dell' 'if' vengono eseguite solo se la condizione risulta vera," ) ;
    puts ( "\t\taltrimenti vengono eseguite le istruzioni nel corpo dell' 'else'." ) ;
    puts ( "\t\tSolo uno dei due gruppi di istruzioni viene eseguito, in base alla condizione:\n" ) ;
    
    if ( numero1 == numero2 ) puts ( "\t\ti due numeri sono uguali.\n" ) ;
    else puts ( "\t\ti due numeri sono diversi.\n" ) ;
    
    // selezione multipla
    puts ( "\t\tLa selezione 'multipla' prevede l'utilizzo della funzione 'switch'." ) ;
    puts ( "\t\tIn input bisogna inserire una variabile che assume diversi valori," ) ;
    puts ( "\t\tin base ai quali viene eseguita una specifica istruzione, dichiarata nel corpo:\n" ) ;

    int condizione;
    if ( numero1 == numero2 ) condizione = 0 ;
    if ( numero1 > numero2 ) condizione = 1 ;
    if ( numero1 < numero2 ) condizione = 2 ;
    
    switch ( condizione )
    {
        case 0 :
            puts ( "\t\ti due numeri sono uguali.\n" ) ;
            break ;

        case 1 :
            puts ( "\t\til primo numero e' maggiore del secondo.\n" ) ;
            break ;

        default :
            puts ( "\t\til primo numero e' minore del secondo.\n" ) ;
            break ;
    }

}
// fine

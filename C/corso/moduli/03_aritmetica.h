// 03. ARITMETICA

void aritmetica ( void )
{
    
    // titolo
    puts ( "\t3. L'aritmetica in C\n" ) ;

    int numero1, numero2 ;

    printf ( "%s", "\t\tInserisci il primo numero: " ) ;
    scanf ( "%d", &numero1 ) ;

    printf ( "%s", "\t\tInserisci il secondo numero: " ) ;
    scanf ( "%d", &numero2 ) ;

    // operatori: +, -, *, /, % (resto divisione)
    printf ( "%s", "\t\tGli operatori aritimetici in C sono: +, -, *, /, %\n" ) ;

    // divisione tra interi restituisce un intero (senza resto)
    printf ( "\t\tLa divisione tra interi %d / %d restituisce un intero, pari a %d.\n", numero1, numero2, numero1 / numero2 ) ;
    
    // 7 % 4 = 3 resto
    printf ( "\t\tL'operatore '%' restituisce il resto della divisione %d / %d, pari a %d.\n\n", numero1, numero2, numero1 % numero2 ) ;

    // le () sono usate per scrivere espressioni algebriche (stesse regole di precedenza)
    puts ( "\t\tRegole di precedenza nelle espressioni algebriche:" ) ;
    puts ( "\t\t1. ()" ) ;
    puts ( "\t\t2. * / %" ) ;
    puts ( "\t\t3. + -" ) ;
    puts ( "\t\t4. < <= > >=" ) ;
    puts ( "\t\t5. == !=" ) ;
    puts ( "\t\t6. =\n" ) ;

}
// fine

// SCELTA DEL MODULO

int scelta_modulo ( void )
{

    puts ( "\tIndice:\n" ) ;
    puts ( "\t\t1. La compilazione" ) ;
    puts ( "\t\t2. Gli input e gli ouput" ) ;
    puts ( "\t\t3. L' aritmetica" ) ;
    puts ( "\t\t4. La selezione" ) ;
    puts ( "\t\t0. Esci\n" ) ;

    int lezione;
    printf ( "%s", "\tScegli una lezione: " ) ;
    scanf ( "%d", &lezione ) ;

    return ( lezione ) ;

}
// fine

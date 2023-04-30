// 02. INPUT & OUTPUT

void input_output ( void )
{

    // titolo
    puts ( "\t2. Gli input e gli output\n" ) ;
    
    int numero1, numero2; // dichiarazione di variabili (locali) intere con allocazione di memoria

    printf ( "%s", "\t\tInserisci il primo numero: " ) ; // stampa a video la richiesta del primo numero
    scanf ( "%d", &numero1 ) ;                     // scrive il numero digitato sulla tastiera in memoria

    // idem per il secondo numero
    printf ( "%s", "\t\tInserisci il secondo numero: " ) ;
    scanf ( "%d", &numero2 ) ;

    // somma dei due numeri e stampa del risultato
    int sum;
    sum = numero1 + numero2;
    printf ( "\t\tIl risultato di %d + %d fa %d.\n\n", numero1, numero2, sum ) ;
    
    // specificatore di conversione
    printf ( "\t\tIl simbolo %s indica lo specificatore di conversione in decimale intero\n", "'%d'" ) ;
    puts ( "\t\te serve sia nella funzione 'scanf' sia in 'printf'." ) ;
    puts ( "\t\tSi abbina al valore o alla variabile indicata.\n" ) ;

    // funzione scanf
    puts ( "\t\tLa funzione 'scanf' prende il valore digitato dall'utente e lo scrive in memoria," ) ;
    puts ( "\t\tall'indirizzo della variabile dichiarata, tramite il simbolo '&'." ) ;
    puts ( "\t\tUn'operazione con 'scanf' e' distruttiva in quanto sovrascrive il valore in memoria.\n" ) ;

    // funzione printf
    puts ( "\t\tLa funzione 'printf' stampa a video un output." ) ;
    puts ( "\t\tQuesta e' un'operazione non distruttiva." ) ;
    puts ( "\t\tLa funzione 'printf' con un solo argomento in input non e' molto sicura." ) ;
    puts ( "\t\tSarebbe preferibile l'utilizzo di 'puts' oppure" ) ;
    puts ( "\t\taggiungere lo specificatore di conversione stringa al 'printf'.\n" ) ;

}
// fine

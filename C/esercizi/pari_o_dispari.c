// leggere un numero intero e stampare se è pari o dispari

#include <stdio.h>
#include <stdlib.h>

void main( void )
{
    
    // leggo un numero intero dall'utente e lo scrivo in memoria
    int numero;
    printf ("%s", "\tInserisci un numero intero: ");
    scanf ("%d", &numero);

    // calcolo il resto della divisione per 2 con l'operatore modulo %
    int resto;
    resto = numero % 2;

    // stampo se pari o dispari in base al resto
    if (resto == 0) puts ("\tIl numero e' pari.");
    else puts ("\tIl numero e' dispari.");

    // evita chiusura immediata del prompt
    printf ("\n\n");
    system("pause");

}

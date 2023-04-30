
// Internet Homebanking

#include <stdio.h>
#include "check_credentials.h"

void main (void)
{
    char username[30], password[30];

    printf ("\tBenvenuto nel servizio di homebanking della tua Banca.\n\n");
    
    // inserimento username
    printf ("\tInserisci la tua username: ");
    scanf ("%s", &username);

    // inserimento password
    printf ("\tInserisci la tua password: ");
    scanf ("%s", &password);

    // controllo credenziali
    if (check_credentials(username, password) == 0)
    {
      printf ("\tAccesso OK.");
    } 
    else
    {
      printf ("\tAccesso negato.");
    }    

}



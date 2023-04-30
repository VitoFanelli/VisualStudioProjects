
// Funzione di controllo credenziali

#include <string.h>

int check_credentials(char *username, char *password)
{
    int check;
    
    if ( (strcmp(username, "test") == 0) && (strcmp(password, "test") == 0 ) )
    {
      check = 0;
    }
    else
    {
      check = 1;
    }

    return check;
}

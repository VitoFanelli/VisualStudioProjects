#include <stdio.h>

int main()
{
    int array[5];  // alloca memoria per il puntatore array e per l'area puntata array[0] (coincidono)

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    printf("Il primo elemento è %d", array[0]);
    printf("\n");
    printf("L'indirizzo di array è %d", &array);
    printf("\n");
    printf("L'indirizzo contenuto in array è %d", array);
    printf("\n");
    printf("L'indirizzo di array[0] è %d", &array[0]);
    printf("\n");
    printf("L'elemento puntato da array è %d", *array);
    printf("\n");

}
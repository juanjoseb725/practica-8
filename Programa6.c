#include <stdio.h>
#define MAX 5

int main ()
{
    int arreglo[MAX], cont;

    // Llenado del arreglo
    for (cont=0; cont<MAX; cont++)
    {
        printf("Ingrese el valor %d del arreglo: ", cont+1);
        scanf("%i", &arreglo[cont]);
    }

    // Impresión del contenido
    printf("\nEl valor ingresado para cada elemento del arreglo es:\n[ ");
    for (cont=0; cont<MAX; cont++)
    {
        printf("%d ", arreglo[cont]); // Se quitó el \t para que quepa mejor en el corchete
    }
    printf("]\n");

    return 0;
}

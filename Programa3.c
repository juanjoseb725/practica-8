#include <stdio.h>

int main ()
{
    char op = 'n';
    double sum = 0, calif = 0;
    int veces = 0;

    do
    {
        printf("\tSuma de calificaciones\n");
        printf("Ingrese la calificación:\n");
        scanf("%lf", &calif);
        
        veces++;
        sum = sum + calif;

        printf("¿Desea sumar otra? S/N\n");
        setbuf(stdin, NULL); // Limpia el buffer
        scanf("%c", &op);
        // getchar(); // Este ya no es estrictamente necesario con setbuf
        
    } while (op == 'S' || op == 's');

    // Jerarquía de salida: Verificamos que se ingresara al menos una calificación
    // para evitar la división por cero.
    if (veces > 0) {
        printf("\n----------------------------------------------\n");
        printf("El promedio de las %d calificaciones es: %.2lf\n", veces, sum/veces);
        printf("----------------------------------------------\n");
    } else {
        printf("\nNo se ingresaron calificaciones.\n");
    }

    return 0;
}

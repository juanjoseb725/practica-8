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
        setbuf(stdin, NULL); // limpia el buffer del teclado
        scanf("%c", &op);
        
    } while (op == 'S' || op == 's');

    // --- Jerarquía de resultados ---
    printf("\n---------------------------------");
    printf("\n        RESUMEN FINAL            ");
    printf("\n---------------------------------");
    printf("\nTotal de calificaciones: %d", veces);
    printf("\nSuma acumulada:          %.2f", sum);
    printf("\nPromedio final:          %.2f", (veces > 0) ? (sum / veces) : 0);
    printf("\n---------------------------------\n");

    return 0;
}

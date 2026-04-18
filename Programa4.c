#include <stdio.h>

int main ()
{
    int op, uno, dos;
    do
    {
        printf("\n --- Calculadora ---\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("5) Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                printf("\tSumar\n");
                printf("Introduzca los numeros a sumar separados por comas\n");
                scanf("%d, %d", &uno, &dos);
                printf("%d + %d = %d\n", uno, dos, (uno + dos));
                break;
            case 2:
                printf("\tRestar\n");
                printf("Introduzca los numeros a restar separados por comas\n");
                scanf("%d, %d", &uno, &dos);
                printf("%d - %d = %d\n", uno, dos, (uno - dos));
                break;
            case 3:
                printf("\tMultiplicar\n");
                printf("Introduzca los numeros a multiplicar separados por comas\n");
                scanf("%d, %d", &uno, &dos);
                printf("%d * %d = %d\n", uno, dos, (uno * dos));
                break;
            case 4:
                printf("\tDividir\n");
                printf("Introduzca los numeros a dividir separados por comas\n");
                scanf("%d, %d", &uno, &dos);
                if (dos != 0) {
                    printf("%d / %d = %.2lf\n", uno, dos, ((double)uno / dos));
                } else {
                    printf("Error: No se puede dividir entre cero.\n");
                }
                break;
            case 5:
                printf("\tSaliendo del programa...\n");
                break;
            default:
                printf("\tOpcion invalida.\n");
        }
    }
    while (op != 5);

    return 0;
}

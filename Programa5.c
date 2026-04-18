#include <stdio.h>

int main ()
{
    int enteroNumAlumnos = 5;
    float realCalif = 0.0, realPromedio = 0.0;

    printf("\tPromedio de calificaciones\n");

    // Ciclo controlado por contador
    for (int indice = 0 ; indice < enteroNumAlumnos ; indice++)
    {
        printf("\nIngrese la calificacion del alumno %d: ", indice + 1);
        scanf("%f", &realCalif);
        realPromedio += realCalif; // Acumulador
    }

    // Cálculo y salida del promedio
    printf("\n----------------------------------------------");
    printf("\nEl promedio de las %d calificaciones es: %.2f\n", 
            enteroNumAlumnos, realPromedio / enteroNumAlumnos);
    printf("----------------------------------------------\n");

    return 0;
}

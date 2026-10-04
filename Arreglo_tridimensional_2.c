#include <stdio.h>

#define CAPAS 2
#define FILAS 3
#define COLUMNAS 4

int main()
{
    // Declarar el arreglo tridimensional
    int arreglo[CAPAS][FILAS][COLUMNAS]; // Inicializamos el arreglo, pero sin variables inicializadas, para eso se ponen las dimensiones en orden

    // Solicitar al usuario que ingrese los valores para el arreglo
    printf("Ingrese los valores para el arreglo tridimensional (%d capas, %d filas, %d columnas):\n", CAPAS, FILAS, COLUMNAS);
    for (int capa = 0; capa < CAPAS; capa++)
    {
        for (int fila = 0; fila < FILAS; fila++)
        {
            for (int columna = 0; columna < COLUMNAS; columna++)
            {
                printf("Ingrese el valor para la capa %d, fila %d, columna %d: ", capa + 1, fila + 1, columna + 1);
                scanf("%d", &arreglo[capa][fila][columna]);
            }
        }
    }

    // Imprimir el arreglo tridimensional
    printf("Arreglo tridimensional ingresado:\n");
    for (int capa = 0; capa < CAPAS; capa++)
    {
        printf("Capa %d:\n", capa + 1);
        for (int fila = 0; fila < FILAS; fila++)
        {
            for (int columna = 0; columna < COLUMNAS; columna++)
            {
                printf("%d ", arreglo[capa][fila][columna]);
            }
            printf("\n"); // Salto de línea al final de cada fila
        }
        printf("\n"); // Salto de línea entre capas
    }

    return 0;
}

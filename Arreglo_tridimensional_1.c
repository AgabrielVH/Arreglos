#include <stdio.h>

#define CAPAS 2
#define FILAS 3
#define COLUMNAS 4

int main() 
{
    // Declarar e inicializar el arreglo tridimensional
    int arreglo[CAPAS][FILAS][COLUMNAS] = 
    {
        { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }, // El numero de corchetes azules son las capas, el numero de corchetes amarillos por cada capa son las filas, y el numero de variables dentro de las filas son el numero de columnas
        { {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24} }
    };

    // Recorrer el arreglo tridimensional
    for (int capa = 0; capa < CAPAS; capa++) // Bucle para recorrer el numero de capas
    {
        printf("Capa %d:\n", capa + 1); // Cada vez que pase el bucle por aqui, va a imprimir el numero de capa en el que se encuentra
        for (int fila = 0; fila < FILAS; fila++) // Bucle para recorrer el numero de filas
        {
            for (int columna = 0; columna < COLUMNAS; columna++) // Bucle para recorrer el numero de columnas
            {
                printf("%d ", arreglo[capa][fila][columna]); // Imprime la variable en la capa, fila y columna especificada
            }
            printf("\n"); // Salto de línea al final de cada fila
        }
        printf("\n"); // Salto de línea entre capas
    }

    return 0;
}

// Los bucles son los que recorren las capas, filas y columnas, asignandole un valor a cada uno (digamos que van dando las coordenadas)
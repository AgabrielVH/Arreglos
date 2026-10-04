#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main()
{
    // Declarar e inicializar el arreglo bidimensional
    int arreglo[FILAS][COLUMNAS] =
    {
        {1, 2, 3, 4}, // El numero de corchetes azules son las filas, y el numero de variables dentro de las filas son el numero de columnas
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    }; // Como podemos apreciar se asigna al arreglo cada variable con una forma de matriz

    // Recorrer el arreglo bidimensional
    printf("Recorrido del arreglo bidimensional:\n");
    for (int fila = 0; fila < FILAS; fila++) // Se recorren las filas, es decir empieza en la fila 0....
    {
        for (int columna = 0; columna < COLUMNAS; columna++) // ... y se recorren las columnas que estan en la fila 0, así con cada fila (fila 0, fila 1, fila 2, etc)
        {
            printf("%d ", arreglo[fila][columna]); // Se imprime el valor correspondiente a la fila y columna especificada, en nuestro caso la primer variable que esta en la fila 0 y columna 0
        }
        printf("\n"); // Salto de línea al final de cada fila
    }

    return 0;
}

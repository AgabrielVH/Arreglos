#include <stdio.h>

#define TAMANO 5

int main()
{
    // Declarar e inicializar el arreglo unidimensional
    int arreglo[TAMANO] = {1, 2, 3, 4, 5}; // El tamaño del arreglo es de 5, es decir tiene 5 calzones, se marca el igual para designar cada variable que tiene contenido el arreglo

    // Recorrer el arreglo unidimensional
    printf("Recorrido del arreglo unidimensional:\n");
    for (int columnas = 0; columnas < TAMANO; columnas++) // Se recorre el arreglo con un bucle for mientras que las columnas sean menores que 5, empezando desde la posicion 0, y por cada bucle se le aumenta 1, osea pasando a la siguiente columna
    {
        printf("%d ", arreglo[columnas]); // Se imprime la variable contenida en la columna especificada o posición especificada (columna 1, columna 2, columna 3 etc)
    }
    printf("\n");

    return 0;
}

// Se recorren las columnas, empezando desde la columna 0 (en C, el 0 es la posición inicial), porque el arreglo puede tener un tamaño de 5 pero la variable que pensariamos que toma el lugar 5 no existe, ya que como se comienza con la posicion 0, la ultima variable del arreglo de tamaño 5 toma la posicion 4. Esto puede confundir al principio y es causa de errores en los codigos. 

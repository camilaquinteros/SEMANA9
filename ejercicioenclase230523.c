#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillMatrix(int** matrix, int rows, int cols) {
    srand(time(NULL));  // Inicializar generador de números aleatorios
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 101;  // Llenar la matriz con números aleatorios entre 0 y 100
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);  // Imprimir elemento de la matriz
        }
        printf("\n");  // Nueva línea después de cada fila
    }
    printf("\n");
}



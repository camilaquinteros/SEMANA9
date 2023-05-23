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

void transposeMatrix(int** matrix, int** transposed, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];  // Intercambiar filas y columnas
        }
    }
}

int main() {
    int rows, cols;
    
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &rows);
    
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &cols);
    
    // Crear la matriz
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    
    // Llenar la matriz con números aleatorios
    fillMatrix(matrix, rows, cols);
    
    printf("\nMatriz original:\n");
    printMatrix(matrix, rows, cols);
    
    // Crear la matriz transpuesta
    int** transposed = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        transposed[i] = (int*)malloc(rows * sizeof(int));
    }
    
    // Calcular la matriz transpuesta
    transposeMatrix(matrix, transposed, rows, cols);
    
    printf("Matriz transpuesta:\n");
    printMatrix(transposed, cols, rows);
    
    // Liberar memoria
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    for (int i = 0; i < cols; i++) {
        free(transposed[i]);
    }
    free(transposed);
    
    return 0;
}
    
   



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

#define MAX 3
#define MAX_VALUE 100

int* allocateMatrix(int size);
void generateRandomMatrix(int* matrix, int size, int maxValue);
void printMatrix(int* matrix, int size);

int main(void) {

    srand(time(NULL));

    int* matrix;

    matrix = allocateMatrix(MAX);

    generateRandomMatrix(matrix, MAX, MAX_VALUE);

    printMatrix(matrix, MAX);

    transposeMatrix(matrix, MAX);

    printMatrix(matrix, MAX);

    free(matrix);
    matrix = NULL;

    // printMatrix(matrix, MAX);

    return 0;
}

int* allocateMatrix(int size) {

    int* matrix;

    matrix = (int*) malloc(size * size * sizeof(int));

    return matrix;

}

void generateRandomMatrix(int* matrix, int size, int maxValue) {

    int i, j;
    int matrixIndex;

    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            matrixIndex = (i * size) + j;
            matrix[matrixIndex] = rand() % maxValue;
        }
    }

}

void printMatrix(int* matrix, int size) {

    int i, j;
    int matrixIndex;

    for (i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            matrixIndex = (i * size) + j;
            printf("%d ", matrix[matrixIndex]);
        }

        printf("\n");
    }

    printf("\n");

}
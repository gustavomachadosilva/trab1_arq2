#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

#define MAX_VALUE 100

void generateRandomMatrix(int matrix[][MAX_COLUMN], int rowSize, int columnSize, int maxValue);
void printMatrix(int matrix[][MAX_COLUMN], int rowSize, int columnSize);
void printMatrix2(int matrix[][MAX_ROW], int rowSize, int columnSize);

int main(void) {

    srand(time(NULL));

    int matrix[MAX_ROW][MAX_COLUMN];
    int matrixDst[MAX_COLUMN][MAX_ROW];

    generateRandomMatrix(matrix, MAX_ROW, MAX_COLUMN, MAX_VALUE);

    printMatrix(matrix, MAX_ROW, MAX_COLUMN);

    transposeMatrix(matrix, matrixDst, MAX_ROW, MAX_COLUMN);

    printMatrix2(matrixDst, MAX_COLUMN, MAX_ROW);

    return 0;
}

void generateRandomMatrix(int matrix[][MAX_COLUMN], int rowSize, int columnSize, int maxValue) {

    int i, j;

    for (i=0; i<rowSize; i++) {
        for (j=0; j<columnSize; j++) {
            matrix[i][j] = rand() % maxValue;
        }
    }

}

void printMatrix(int matrix[][MAX_COLUMN], int rowSize, int columnSize) {

    int i, j;

    for (i=0; i<rowSize; i++) {
        for(j=0; j<columnSize; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("\n");

}

void printMatrix2(int matrix[][MAX_ROW], int rowSize, int columnSize) {

    int i, j;

    for (i=0; i<rowSize; i++) {
        for(j=0; j<columnSize; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("\n");

}
#include "matrix.h"


void transposeMatrix(int* matrix, int size) {

    int i, j;
    int aux;
    int firstIndex, secondIndex;

    for (i=0; i<size; i++) {
        // printf("%d\n", i);
        for (j=i; j<size; j++) {
            //printf("%d\n", j);
            firstIndex = (i*size) + j;
            secondIndex = (j*size) + i;

            aux = matrix[firstIndex];
            matrix[firstIndex] = matrix[secondIndex];
            matrix[secondIndex] = aux;

        }
    }

}

// void multiplyMatrices(int firstSrcMatrix[][MAX_COLUMN], int secondSrcMatrix[][MAX_COLUMN], int dstMatrix[][MAX_COLUMN], int size) {

//     int i, j, k;
//     int aux;

//     for (i=0; i<size; i++) {
//         for (j=0; j<size; j++) {

//             aux = 0;
//             for (k=0; k<size; k++) {
//                 aux += firstSrcMatrix[i][k] * secondSrcMatrix[k][j];
//             }

//             dstMatrix[i][j] = aux;

//         }
//     }

// }
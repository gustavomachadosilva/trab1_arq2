#include "matrix.h"


void transposeMatrix(int src[][MAX_COLUMN], int dst[][MAX_ROW], int rowSize, int columnSize) {

    int i, j;

    for (i=0; i<rowSize; i++) {
        // printf("%d\n", i);
        for (j=0; j<columnSize; j++) {
            //printf("%d\n", j);
            dst[j][i] = src[i][j];
        }
    }

}

void multiplyMatrices(int firstSrcMatrix[][MAX_COLUMN], int secondSrcMatrix[][MAX_COLUMN], int dstMatrix[][MAX_COLUMN], int rowSize, int columnSize) {

    int i, j;

    for (i=0; i<rowSize; i++) {
        
    }

}
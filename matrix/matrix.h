#ifndef matrix_h
#define matrix_h

#include <stdio.h>

#define MAX_ROW 2
#define MAX_COLUMN 3

void transposeMatrix(int src[][MAX_COLUMN], int dst[][MAX_ROW], int rowSize, int columnSize);


#endif /* matrix_h */
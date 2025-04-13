#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"quickSort.h"

#define MAX 20
#define MAX_VALUE 20000

int* allocateArray(int size);
int* freeArray(int* array);
void generateRandomArray(int values[], int size, int maxValue);
void printArray(int values[], int size);

int main(void) {

    srand(time(NULL));

    int* values;
    int recursionsCounter;
    int swapCounter;

    values = allocateArray(MAX);

    generateRandomArray(values, MAX, MAX_VALUE);

    quickSort(values, 0, MAX-1, MEDIAN_OF_THREE, HOARE, &recursionsCounter, &swapCounter);

    printArray(values, MAX);

    values = freeArray(values);

    // printArray(values, MAX);

    printf("---- OK ----\n");

    return 0;
}

int* allocateArray(int size) {

    int* array = (int*) malloc(size * sizeof(int));

    return array;

}

int* freeArray(int* array) {
    
    free(array);
    return NULL;

}

void generateRandomArray(int values[], int size, int maxValue) {

    int i;

    for (i=0; i<size; i++) {
        values[i] = rand() % maxValue;
    }

}

void printArray(int values[], int size) {

    int i;

    for(i=0; i<size; i++) {
        printf("%d ", values[i]);
    }

    printf("\n\n");

}
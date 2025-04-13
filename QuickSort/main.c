#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"quickSort.h"

#define MAX 100000
#define MAX_VALUE 20000

void generateRandomArray(int values[], int size, int maxValue);
void printArray(int values[], int size);

int main(void) {

    srand(time(NULL));

    int values[MAX];
    int recursionsCounter;
    int swapCounter;

    generateRandomArray(values, MAX, MAX_VALUE);

    quickSort(values, 0, MAX-1, MEDIAN_OF_THREE, HOARE, &recursionsCounter, &swapCounter);

    // printArray(values, MAX);
    printf("---- OK ----\n");

    return 0;
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
//
//  main.c
//  labArvores
//
//  Created by Gustavo Machado Silva on 26/11/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "binarySearchTree.h"

#define MAX 10000000
#define MAX_VALUE 1000000

int main(int argc, const char * argv[]) {

    srand(time(NULL));
    
    Node *tree = createTree();
    int i;
    int number;

    for (i=0; i<MAX; i++) {

        number = rand() % MAX_VALUE;

        tree = insertTree(tree, number);
    }
    
    destroyTree(tree);
    
    
    return 0;
}

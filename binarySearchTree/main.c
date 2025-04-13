//
//  main.c
//  labArvores
//
//  Created by Gustavo Machado Silva on 26/11/24.
//

#include <stdio.h>
#include "binarySearchTree.h"

int main(int argc, const char * argv[]) {
    
    Node *tree = createTree();
    int wantedNode = 6;
    int wantedNodeBalancingFactor;
    
    tree = insertTree(tree, 35);
    tree = insertTree(tree, 2);
    tree = insertTree(tree, 71);
    tree = insertTree(tree, 1);
    tree = insertTree(tree, 6);
    tree = insertTree(tree, 49);
    tree = insertTree(tree, 73);
    tree = insertTree(tree, 28);
    tree = insertTree(tree, 44);
    tree = insertTree(tree, 50);
    
    preFixedLeft(tree);
    
    wantedNodeBalancingFactor = nodeBalancingFactor(tree, wantedNode);
    
    if (wantedNodeBalancingFactor != ERROR) {
        printf("\nbalancing factor of node %d: %d\n", wantedNode, wantedNodeBalancingFactor);
    }
    else {
        printf("The node %d is not presente in the tree!\n", wantedNode);
    }
    
    printf("Is it an AVL tree? ");
    if (isAvl(tree)) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    
    printf("Closest value of the node %d: %d\n", wantedNode, searchValue(tree, wantedNode));
    
    destroyTree(tree);
    
    
    return 0;
}

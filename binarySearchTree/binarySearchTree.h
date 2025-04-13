//
//  binarySearchTree.h
//  labArvores
//
//  Created by Gustavo Machado Silva on 26/11/24.
//

#ifndef binarySearchTree_h
#define binarySearchTree_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define ERROR 1000

typedef struct node {
    int info;
    struct node *left;
    struct node *right;
} Node;

Node* createTree(void);
Node* insertTree(Node* node, int info);
int height(Node* node);
int isAvl(Node* node);
int searchValue(Node *node, int value);
void destroyTree(Node *root);
void preFixedLeft(Node *root);
int nodeBalancingFactor(Node *root, int nodeInfo);

#endif /* binarySearchTree_h */

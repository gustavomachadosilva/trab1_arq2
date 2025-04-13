//
//  binarySearchTree.c
//  labArvores
//
//  Created by Gustavo Machado Silva on 26/11/24.
//

#include "binarySearchTree.h"

Node* createTree(void) {
    return NULL;
}

Node* insertTree(Node* node, int info) {
    
    if (node == NULL) {
        node = (Node*) malloc(sizeof(Node));
        node->info = info;
        node->left = NULL;
        node->right = NULL;
        
        return node;
    }
    else {
        if (info < node->info) {
            node->left = insertTree(node->left, info);
        }
        else if (info > node->info) {
            node->right = insertTree(node->right, info);
        }
        
        return node;
    }
    
}

int height(Node* node) {
    
    int leftHeight, rightHeight;
    
    if (node == NULL) {
        return 0;
    }
    else {
        leftHeight = height(node->left);
        rightHeight = height(node->right);
        
        if (leftHeight > rightHeight) {
            return (1 + leftHeight);
        }
        else {
            return (1 + rightHeight);
        }
    }
    
}

int isAvl(Node* node) {
    
    int leftHeight, rightHeight;
    
    if (node != NULL) {
        
        leftHeight = height(node->left);
        rightHeight = height(node->right);
        
        return ( (leftHeight - rightHeight < 2) && (rightHeight - leftHeight < 2) && (isAvl(node->left)) && (isAvl(node->right)) );
        
    }
    else {
        return TRUE;
    }
    
}

int searchValue(Node *node, int value) {
    
    Node *newNode = node;
    int difference, smallestDifference, nearestNumber;
    
    smallestDifference = INFINITY;
    nearestNumber = newNode->info;
    
    if (newNode == NULL) {
        return 0;
    }
    
    while (newNode != NULL) {
        
        difference = abs(value - newNode->info);
        
        if (difference < smallestDifference) {
            smallestDifference = difference;
            nearestNumber = newNode->info;
        }
        
        if (value > newNode->info) {
            newNode = newNode->right;
        }
        else if (value < newNode->info) {
            newNode = newNode->left;
        }
        else {
            nearestNumber = newNode->info;
            newNode = NULL;
        }
        
    }
    
    return nearestNumber;
    
}

void destroyTree(Node *root) {
    
    Node *node = root;
    
    if (node != NULL) {
        
        destroyTree(node->left);
        destroyTree(node->right);
        
        free(node);
        
    }
    
}

void preFixedLeft(Node *root) {
    
    Node *node = root;
    
    if (node != NULL) {
        
        printf("%d - ", node->info);
        preFixedLeft(node->left);
        preFixedLeft(node->right);
        
    }
    
}

int nodeBalancingFactor(Node *root, int nodeInfo) {
    
    Node *node = root;
    int nodeFactor = ERROR;
    
    while (node != NULL) {
        
        if (nodeInfo > node->info) {
            node = node->right;
        }
        else if (nodeInfo < node->info) {
            node = node->left;
        }
        else {
            nodeFactor = height(node->left) - height(node->right);
            node = NULL;
        }
        
    }
    
    return nodeFactor;
    
}

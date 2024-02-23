// Write a program in C to return only the unique rows from a given binary matrix.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define R 4 // Number of rows
#define C 5 // Number of columns

// Struct definition for trie node
typedef struct Node {
    bool chkEndOfCol;      // Indicates the end of a row
    struct Node *child[2]; // Child nodes (left and right)
} myNode;

// Function to create a new node for the trie
myNode* newNode() {
    myNode* temp = (myNode *)malloc( sizeof( myNode ) );
    temp->chkEndOfCol = 0;
    temp->child[0] = temp->child[1] = NULL;
    return temp;
}

// Function to insert a row into the trie
bool insert(myNode** root, int (*arr1)[C], int r, int c) {
    // If root is NULL, create a new node
    if (*root == NULL)
        *root = newNode();

    // If within columns, continue inserting
    if (c < C)
        return insert(&((*root)->child[arr1[r][c]]), arr1, r, c+1);
    else {
        // If end of column, mark it in the trie
        if (!((*root)->chkEndOfCol))
            return (*root)->chkEndOfCol = 1;
        return 0;
    }
}

// Function to print a row of the array
void printRow(int (*arr1)[C], int r) {
    int i;
    for (i = 0; i < C; ++i)
        printf("%d ", arr1[r][i]);
    printf("\n");
}

// Function to find and print unique rows of the array
void findUniqueRows(int (*arr1)[C]) {
    myNode* root = NULL;
    int i;
    printf("The unique rows of the given array are :\n");
    for (i = 0; i < R; ++i) {
        // If row is inserted into trie (i.e., not a duplicate), print the row
        if (insert(&root, arr1, i, 0))
            printRow(arr1, i);
    }
}

int main() {
    int arr1[R][C] = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 1, 0, 0}
    };
    int i, j;

    // Print the original array
    printf("The given array is :\n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d  ", arr1[i][j]);
        } 
        printf("\n");
    }

    // Find and print unique rows of the array
    findUniqueRows(arr1);
    return 0;
}

/**
 * List
 *
 * Linked List
 */
#include <stdio.h>

typedef int ElementType;

struct Node{
    ElementType Data; //
    struct Node* NextNode;
};

typedef struct tagNode{
    ElementType Data;
    struct tagNode* NextNode;
} Node;


int main() {
    printf("Hello, World!\n");
    return 0;
}

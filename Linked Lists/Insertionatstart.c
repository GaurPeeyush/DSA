#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr -> next;
    }
}
struct Node * insertatstart(struct Node *head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 7;
    head -> next = second;
    
    second -> data = 11;
    second -> next = third;
    
    third -> data = 45;
    third -> next = NULL;
    
    printf("before\n");
    traversal(head);
    printf("\n");
    printf("after\n");
    head = insertatstart(head, 89);
    traversal(head);
    return 0;
}

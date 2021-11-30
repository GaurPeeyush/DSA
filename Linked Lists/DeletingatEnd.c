#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};
void traversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr -> next;
    }
}
struct Node* dellast(struct Node*head){
    struct Node * ptr = head;
    struct Node * p = head -> next;
    while(p -> next != NULL){
        ptr = ptr -> next;
        p = p -> next;
    }
    ptr -> next = NULL;
    free(p);
    return head;
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
    
    printf("Before\n");
    traversal(head);
    head = dellast(head);
    printf("After\n");
    traversal(head);
}

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
struct Node * delbetween(struct Node *head, int (pos)){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
     while(i != pos-1){
        p = p -> next;
        i++;
    }
    ptr = p -> next;
    p -> next = ptr -> next;
    free(ptr);
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
    head = delbetween(head, 1);
    printf("After\n");
    traversal(head);
    return 0;
}

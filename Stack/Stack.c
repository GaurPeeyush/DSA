#include <stdio.h>
#include <ctype.h>
#define size 50
int stack_arr[size];
int top = -1;
char pop()
{
    return (top--);
}
void push(int ele)
{
    top = top + 1;
    stack_arr[top] = ele;
}
void display()
{   printf("Stack is: ");
    for (int i = 0; i < top + 1; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[50];
    int choice;
    int ele;
    do
    {
        printf("1. push\n2. pop\n3. display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be entered: \n");
            scanf("%d", &ele);
            push(ele);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }while(choice!=4);
}

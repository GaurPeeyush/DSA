// TO be checked
#include <stdio.h>
#define size 50
int arr[size];
int front, rear;
front = -1;
rear = -1;
void insert(int ele)
{
    if (rear == size - 1)
    {
        printf("queue is full\n");
    }
    else
    {
        rear = rear + 1;
        arr[rear] = ele;
    }
}
void del ()
{
    printf("%d has been deleted\n", arr[front]);
    front = front + 1;
}
void display()
{
    for (int i = front; i <= rear+1; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int ch, elem;
    do
    {
        printf("1.Insert\n2.Delete\n3.Display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be inserted: \n");
            scanf("%d", &elem);
            insert(elem);
            break;
        case 2: del();
            break;
        case 3:
            display();
            break;
        default : printf("invalid choice\n");
        }
    } while (1);
}
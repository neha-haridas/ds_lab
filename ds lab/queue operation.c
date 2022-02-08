
#include <stdio.h>

#define MAX 50

void insert();
void delete();
void display();
int queue[MAX];
int rear = - 1;
int front = - 1;
void main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display  elements of queue \n");
        printf("4.exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);

        }
    }
}

void insert()
{
    int item;
    if (rear== MAX-1)
    printf("Overflow \n");
    else
    {
        if (front==-1)

        front = 0;
        printf("Enter the element to be inserted into the queue:");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}

void delete()
{
     if(front==rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    printf("queue elements are:\n");
    if (front == rear)
        printf("Queue is empty \n");
    else
    {
        printf("queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

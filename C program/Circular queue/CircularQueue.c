#include <stdio.h>
#define max 5
int queue[max];
int front = -1, rear = -1, item;

void enqueue()
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else if ((rear + 1) % max == front)
    {
        printf("\nThe queue is full !");
    }
    else
    {
        rear = (rear + 1) % max;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nThe queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        item = queue[front];
        front = (front + 1) % max;
        printf("\ndeleted item is %d", item);
    }
}

void display()
{
    int i=front;
    if (front == -1 && rear == -1)
    {
        printf("\nThe queue is empty");
    }
    else
    {
        printf("\n Elements in a queue are: ");
        while (i != rear)
        {
            printf("\n queue[%d]=%d", i, queue[i]);
            i = (i + 1) % max;
        }
        printf("\n queue[%d]=%d", i, queue[rear]);
    }
}
void main()
{
    int choice = 1, x;
    while (choice < 4 && choice != 0)
    {
        printf("\n Press 1: Insert and Element");
        printf("\n Press 2: Delete an Element");
        printf("\n Press 3: Display the element");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the element which is to be inserted:");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
        }
    }
}
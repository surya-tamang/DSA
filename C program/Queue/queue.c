#include <stdio.h>

#define max 4

int queue[max];
int front = -1, rear = -1, item;

void enqueue()
{
	if (rear <= max - 1)
	{
		printf("\nEnter a number:");
		scanf("%d", &item);
		if (front == -1)
		{
			front = 0;
			rear = 0;
			queue[rear] = item;
		}
		else
		{
			rear++;
			queue[rear] = item;
		}
	}
	else
	{
		printf("\nQueue is full");
	}
}

void dequeue()
{
	if (front >= 0)
	{
		item = queue[front];
		if (front == rear)
		{
			front = -1;
			rear - 1;
			printf("\nDeleted item is %d", item);
		}
		else
		{
			front++;
			printf("\nDeleted item is %d", item);
		}
	}
	else
	{
		printf("Queue is empty");
	}
}

void display()
{
	int i;
	if (front == -1 && rear == -1)
	{
		printf("\n Queue is empty");
	}
	else
	{
		for (i = front; i <= rear; i++)
		{
			printf("\nqueue item [%d] = %d \n", i, queue[i]);
		}
	}
}

void main()
{
	int ch;

	do
	{
		printf("\n1)Enqueue 2)Dequeue 3)Display 0)Exit\n");
		printf("Enter a choice:");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		default:
			printf("\nInvalid choice !!");
		}
	} while (ch != 0);
	getch();
}
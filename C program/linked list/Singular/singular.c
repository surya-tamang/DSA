#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *temp;
struct Node *newNode;

void traversal(struct Node *ptr)
{
	while (ptr != NULL)
	{
		printf("| %d \t| %p \t|\n", ptr->data, ptr->next);
		printf("---------------------------------\n");
		ptr = ptr->next;
	}
}

void addInFirst(int data)
{
	newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

int main()
{
	int ch;

	do
	{
		newNode = (struct Node *)malloc(sizeof(struct Node));

		if (newNode == NULL)
		{
			printf("\nMemory allocation failed !!\n");
			return 1;
		}

		printf("\nEnter the element: ");
		scanf("%d", &newNode->data);
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;
			temp = newNode;
		}
		else
		{
			temp->next = newNode;
			temp = newNode;
		}

		printf("\nDo you want to continue: (0)Exit (1)Continue: ");
		scanf("%d", &ch);

	} while (ch);
	printf("\nThe elements in linked list are:\n");
	printf("\n");
	printf("---------------------------------\n");
	printf("| Data \t| Memory \t\t|\n");
	printf("---------------------------------\n");
	addInFirst(56);
	traversal(head);

	return 0;
}

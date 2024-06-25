#include <stdio.h>
#define MAX 5

int array[MAX];
int top = -1;

int push(int value){
	if(top == MAX -1){
		printf("stack overflow\n");
	}else{
		top =top +1;
		array[top]=value;
	}
}

int pop(){
	if(top==-1){
		printf("stack underflow\n");
	}else{
		int item = array[top];
		top =top -1;
		printf("Deleted item is %d",item);
	}
}

int peek(){
	int i;
	if(top==-1){
		printf("\nstack is empty\n");
	}else{
			for(i=0;i<=top;i++){
		printf("%d \t",array[i]);
	}
	}

}

void main(){
	int ch,value;
	
	do{
		printf("\nEnter a choice:\n1)Push 2)Pop 3)Peek 0)exist\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("Enter the value\n");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
				
			case 3:
				peek();
				break;
			default:
				printf("Invalid choice\n");
				
		}
	}while(ch!=0);
	getch();
}

#include<stdio.h>
int stack[30],front=0,rear=-1,n,choice;
void enqueue();
void dequeue();
void peak();
void display();

int main()
{
	printf("Enter the number of terms: \n");
	scanf("%d",&n);
	printf("1) For enqueue \n2) For dequeue \n3) For peak \n4) To display \n5) To exit \n");

do
{
	printf("Enter the choice:\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		enqueue();
		break;
		
		case 2:
		dequeue();
		break;
		
		case 3:
		peak();
		break;
		
		case 4:
		display();
		break;
		
		case 5:
		break;
		
		default:
		break;
	}
	}while(choice!=5);
}


	void enqueue()
	{
		if(rear<n-1)
		{
			rear=rear+1;
			printf("Enter the element to be enqueue: \n");
			scanf("%d",&stack[rear]);
		}
		else
		{
			printf("The stack is OVERFLOW situation \n");
		}
	}

	void dequeue()
	{
		if(rear<front)
		{
			printf("The stack is in UNDERFLOW situation \n");
		}
		else
		{
			printf("The dequeued element is %d \n",stack[front]);
			front=front+1;
		}
	}

	void peak()
	{
		int i;
		if(rear<front){
		printf("The stack is empty \n");
		}
		else{
		printf("The front element is %d \n",stack[front]);
		}
	}
	
	void display()
	{
		int i;
		if(rear<front){
		printf("The stack is empty \n");
		}
		else{
		printf("The element in the stack are: \n");
		for(i=rear;i>=front;i--)
		{
			printf("%d \n", stack[i]);
		}
	}
	
}

#include<stdio.h>
int stack[30],top,n,choice;
void push();
void pop();
void peak();
void display();

int main()
{
	top=-1;
	printf("Enter the number of terms: \n");
	scanf("%d",&n);
	printf("1) For push \n2) For pop \n3) For peak \n4) To display \n5) To exit \n");

do
{
	printf("Enter the choice:\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		push();
		break;
		
		case 2:
		pop();
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


	void push()
	{
		if(top<n)
		{
			top=top+1;
			printf("Enter the element to be pushed: \n");
			scanf("%d",&stack[top]);
		}
		else
		{
			printf("The stack is OVERFLOW situation \n");
		}
	}

	void pop()
	{
		if(top>=0)
		{
			printf("The poped element is %d \n",stack[top]);
			top=top-1;
		}
		else
		{
			printf("The stack is in UNDERFLOW situation \n");
		}
	}

	void peak()
	{
		if(top==-1){
		printf("The stack is empty \n");
		}
		else{
		printf("The top element is %d \n",stack[top]);
		}
	}
	
	void display()
	{
		int i;
		if(top==-1){
		printf("The stack is empty \n");
		}
		else{
		printf("The element in the stack are: \n");
		for(i=top;i>=0;i--)
		{
			printf("%d \n", stack[i]);
		}
	}
	
}

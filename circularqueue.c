#include<stdio.h>
int a[50],front=-1,rear=-1,max;
void enqueue();
void dequeue();
void display();
void main()
{
int choice;
printf("enter the maximum of queue\n");
scanf("%d",&max);
do
{
printf("enter the choice\t1)enqueue\t2)dequeue\t3)display\t4)exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
display();
break;
}
case 4:
{
break;
}
default :
{
printf("invalid choice\n");
}
}
}
while(choice!=5);
}
void enqueue()
{
int val;
printf("enter the value to be added\n");
scanf("%d",&val);
if(front==-1&&rear==-1)
{
front=0;
rear=0;
a[rear]=val;
}
else if(front==(rear+1)%max)
{
printf("overflow\n");
}
else
{
rear=(rear+1)%max;
a[rear]=val;
}
}
void dequeue()
{
int item;
if(front==-1&&rear==-1)
{
printf("underflow\n");
}
else if(front==rear)
{
item=a[front];
printf("the value %d is removed\n",item);
front=-1;
rear=-1;
}
else
{
item=a[front];
printf("the value %d is removed\n",item);
front=(front+1)%max;
}
}
void display() {
int i;
if(front == -1)
printf("Empty Circular queue, no elements to display\n");
else {
 printf("\Elements of queue: ");
for (i = front; i != rear; i = (i + 1) %max) 
{
printf("%d ", a[i]);
}
printf("%d ", a[i]);
}
printf("\n");
}

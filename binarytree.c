#include<stdio.h>
void main()

{
	int n,i,po;
	printf("Enter the number of elements in binary tree: \n");
	scanf("%d",&n);
	int t[n];
	printf("Enter the number of the tree: \n");
	for(i=1;i<=n;i++)
	{
	 scanf("%d",&t[i]);
	}
 	printf("Enter the position of node: \n");
	scanf("%d",&po);
	
	if(2*po>n)
	{
	 printf("%d has no left child.\n",t[po]);
	}
	else
	{
	 printf("Left child of %d is %d.\n",t[po],t[2*po]);
	}
	if(2*po+1>n)
	{
	 printf("%d has no right child.\n",t[po]);
	}
	else
	{
	 printf("right child of %d is %d.\n",t[po],t[2*po+1]);
	}
	if(po>1&&po<=n)
	{
	 printf("parents of %d is %d.\n",t[po],t[po/2]);
	}
	else
	{
	 printf("%d has no parent.\n",t[po]);
	}
}

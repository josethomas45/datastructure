#include<stdio.h>
void quicksort(int a[30],int l,int h);
void main()
{
	int lim,i,a[30];
	printf("Enter the limit:\n");
	scanf("%d",&lim);
	printf("Enter the values for array:\n");
	for(i=0;i<lim;i++)
	{
	scanf("%d",&a[i]);
	}
	quicksort(a,0,lim-1);
	printf("Quick sorted array:\n");
	for(i=0;i<lim;i++)
	{
	 printf("%d\t",a[i]);
	}
	printf("\n");
}

void quicksort(int a[30], int l,int h)
{
	int pivot,i,j,temp;
	if(l<h)
	{
	pivot=l;
	i=l;
	j=h;
	while(i<j)
	{
		while(a[i]<=a[pivot])
		i++;
		while(a[j]>a[pivot])
		j--;
		if(i<j)
		{
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
		}
	}

temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quicksort(a,l,j-1);
quicksort(a,j+1,h);
}
}

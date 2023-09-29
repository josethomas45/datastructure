/**********************************************************
 * File        :  linearsearch.c
 * Author      :  Jose Thomas
 * Version     :  1.0
 * Date        :  29/09/2023
 **********************************************************/
#include<stdio.h>
void main()
{
int limit,i,search,count=0,flag=0,sc=24;
count=count+2;
printf("Enter a limit \n");
scanf("%d",&limit);
count++;
int a[limit];
sc=sc+(4*limit);
printf("Enter the values :\n");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
printf("enter the value to be search: \n");
scanf("%d",&search);
count++;
for(i=0;i<limit;i++)
{
	count++;
	if(a[i]==search)
		{
		count++;
		printf("%d is present \n",a[i]);
		count++;
		break;
		}
	else
		{
		count++;
		flag++;
		}
}
count++;
if(flag==limit)
{
printf("%d is not present\n",search);
count=count+3;
}
	printf("Time complexity = %d \nSpace complexity = %d \n",count,sc);
}

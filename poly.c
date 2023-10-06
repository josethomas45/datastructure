#include<stdio.h>
void main()
{
	int limit,i;
	printf("Enter the terms in polynomial: \n");
	scanf("%d",&limit);
	
	
	struct poly
	{
		int coeff,expo;
	}s[limit];
	
	printf("Enter the terms of polynomial in descending order of their exponents: \n");
	for(i=0;i<limit;i++)
	{
		printf("Enter the coefficients of %d term \n",i);
		scanf("%d",&s[i].coeff);
		printf("Enter the exponents of %d term \n",i);
		scanf("%d",&s[i].expo);
	}
	
	for(i=0;i<limit;i++)
	{
	if(i<limit-1)
	{
		printf("%dx^%d+",s[i].coeff,s[i].expo);
	}
	else
	{
		printf("%dx^%d \n",s[i].coeff,s[i].expo);
	}
	}
	
}

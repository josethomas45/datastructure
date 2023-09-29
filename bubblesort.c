#include<stdio.h>
 void main()
  {
    int i,j,lim,temp,count=0,sc=24;
    count=count+1;
    printf("enter the limit: \n");
    scanf("%d",&lim);
    int a[lim];
    sc=sc+(4*lim);
    count=count+1;
    printf("Enter the number: \n");
    for(i=0;i<lim;i++)
    {
        count=count+1;
        scanf("%d",&a[i]);
        count=count+1;
    }
    count=count+1;
    for(i=0;i<lim;i++)
    {
      count=count+1;
      for(j=i+1;j<lim;j++)
      {
        count=count+1;
        if(a[i]>a[j])
        {
          temp=a[i];
          count=count+1;
          a[i]=a[j];
          count=count+1;
          a[j]=temp;
          count=count+1;
        }
      }
      count=count+1;
    }
    count=count+1;
    printf("The sorted array: \n");
    for(i=0;i<lim;i++)
    {
        count=count+1;
        printf("%d \t", a[i]);
        count=count+1;
    }
    count=count+3;
    printf("\nThe time complexity = %d \nThe space complexity = %d \n",count,sc);
  }
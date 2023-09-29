#include<stdio.h>
 void main()
  {
  int i,lim,j,temp,min_index,count;
  count=count+1;
  printf("Enter the limit : \n");
  scanf("%d",&lim);
  count=count+1;
  int a[lim];
  printf("Enter the variable : \n");
  for(i=0;i<lim;i++)
   {count=count+1;
    scanf("%d",&a[i]);
    count=count+1;
   }
   for(i=0;i<lim;i++)
   {count=count+1;
    min_index=i;
    count=count+1;
    for(j=i+1;j<lim;j++)
    {count=count+1;
     if(a[j]<a[min_index])
     {count=count+1;
      min_index=j;
      count=count+1;
    }
    count=count+1;
    }
    count=count+1;
    temp=a[min_index];
    count=count+1;
     a[min_index]=a[i];
     count=count+1;
     a[i]=temp; 
     count=count+1;
     
    }
    count=count+1;
   
   for(i=0;i<lim;i++)
    {count=count+1;
    printf("%d \t",a[i]);
    count=count+1;
    }
    printf("\nThe time complexity = %d \nThe Space complexity= %d\n",count,24+(4*lim));
  }

#include<stdio.h>
void main()
{
   int lim,i,j,temp,left,right,x,middle,count=0;
   printf("Enter a limit:\n");
   scanf("%d",&lim);
   count=count+1;
   int a[lim];
   printf("Enter the values\n");
   for(i=0;i<lim;i++)
   {
   count=count+1;
     scanf("%d",&a[i]);
     count=count+1;
   }
   for(i=0;i<lim;i++)
   {  count=count+1;
     for(j=i+1;j<lim;j++)
     {  count=count+1;
      if(a[i]>a[j])
      {  count=count+1;
        temp=a[i];
        count=count+1;
        a[i]=a[j];
        count=count+1;
        a[j]=temp;
        count=count+1;
      }
      count=count+1;
      }
      count=count+1;
      }
      count=count+1;
      printf("Enter the value to search:\n");
      scanf("%d",&x);
      count=count+1;
      left=0;
      count=count+1;
      right=lim-1;
      count=count+1;
      middle=(left+right)/2;  
      count=count+1;                                                                      
      while(left!=right)
      {   count=count+1;
         if(x<a[middle])
         {  count=count+1;
            right=middle-1;
            count=count+1;
            middle=(left+right)/2;
            count=count+1;
         }
         else if(x>a[middle])
         {  
            count=count+1;
            left=middle+1;
            count=count+1;
            middle=(left+middle);
            count=count+1;
         }
         count=count+1;
      }
      count=count+1;
      if(x==a[middle])
      { count=count+1;
      printf("%d is present\n",x);
      count=count+1;
      }
      else{
       count=count+1;
      printf("%d is not present\n",x);
      count=count+1;
      }
      count=count+3;
      printf("\nTime complexity=%d\nspace complexity=%d\n",count,36+(4*lim));
      }

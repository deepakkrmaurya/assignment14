/*8. Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
int main()
{
    int i,b,a[100],j,size;
    printf("inter the size\n");
    scanf("%d",&size);
    printf("inter the %d element\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i <size; i++)
    {
       for(j=i+1;j<size;j++)
       {
          if(a[i]>a[j])
          {
          b=a[i];
          a[i]=a[j];
          a[j]=b;
          }
       }
    }
       i=1;
        printf(" second largest=%d ",a[i]);
       
}    
    
        
    
    
    
    
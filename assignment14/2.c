/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int i,a[10];
    float sum=0;

    printf("inter the number");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
       sum=sum+a[i];                                                                    
    }
    
    printf("average-->%0.1f",sum/10);
    
    return 0;
    
}
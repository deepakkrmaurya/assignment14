/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int i,a[10];
    int sum_even=0,sum_odd=0;
    printf("inte thhr ten number");
    for ( i = 0; i <10; i++)
    {
       scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < 10; i++)
    {
        if(a[i]%2==0)
        {
           sum_even=sum_even+a[i]; 
        }
        else
        sum_odd=sum_odd+a[i];
    }
    printf("sum_even=%d\n",sum_even);
    printf("sum_odd=%d",sum_odd);
    return 0;
}
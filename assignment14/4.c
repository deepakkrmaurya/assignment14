/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int i,a[10];
    int gereast=0;
    printf("inter the ten number");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        if(gereast<a[i])
        {
            gereast=a[i];
        }
    }
    printf("gereast number-->%d",gereast);
}
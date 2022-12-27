/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int i,a[10];
    int small;
    printf("inter the ten number");
    for (size_t i = 0; i < 9; i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for ( i = 0; i < 10; i++)
    {
        if(small>=a[i])
        {
            small=a[i];
        }
        
    }                      
    printf("small-->%d\n",small);
   return 0;
}
/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[100],i,n,size;
    printf("inter the size of array\n");
    scanf("%d",&size);
    printf("inter the %d element\n",size);
    for (size_t i = 0; i <size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    
    for ( i = 1; i <size+1; i++)
    {
        n=size-i;
        printf("%d ",a[n]);
    }
    
    return 0;
}
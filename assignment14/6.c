/*6. Write a program to sort elements of an array of size 10. Take array values from the
user.*/
#include<stdio.h>
int main()
{
    int i,a[10]={4,6,3,1,9,2,7,8,5,10},j,b;
    for ( i = 0; i <10; i++)
    {
        for ( j =i+1; j <10; j++)
        {
            if (a[i] > a[j]) 
                {
 
                     b =  a[i];
                    a[i] = a[j];
                    a[j ]= b;
                }
        }       
        
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}
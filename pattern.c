#include<stdio.h>
#define SIZE 5
void main()
{
    
    for(int i=1;i<=SIZE;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
}

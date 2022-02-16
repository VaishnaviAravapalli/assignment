#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5}; 
    
    int b[] = {1,2,3,4,5};
    
    int c[5];
     c[0]=1;
     c[0]=2;
     c[0]=3;
     c[0]=4;
     c[0]=5;
    
    int d[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
         printf(" %d",d[i]);
        printf(" %u",&d[i]);
       
        
    }
}


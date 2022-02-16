#include <stdio.h>
#define SIZE 5
#define MAX(x,y) (x>y)? x:y

int main()
{
    int a[SIZE]={10,2,23,14,'c'};
    int max = a[0];
    for(int i=0;i< SIZE;i++)
    {
        max= MAX(max,a[i]);
        
    }
    printf("%d",max);
}

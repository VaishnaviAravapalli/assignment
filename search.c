#include <stdio.h>
int main()
{
    enum present {no,yes};
    int a[10],i,n,search,count=no;
    
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("\n Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }
    printf("\n Enter an element to search in an array");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search == a[i])
        count=yes;
    }   
        
        if(count ==1)
        {
            printf("%d is found",search);
        }
        else
        {
        printf(" %d is not found",search);
        }
        
}


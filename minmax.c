#include<stdio.h>
void main()
{
    int a[10],n,i,max,min;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
    if(a[i]>max)
    {
        max=a[i];
        
    }
    if(a[i]<min)
    {
        min=a[i];
    }
    }
    printf("Max is %d and min is %d",max,min);
}

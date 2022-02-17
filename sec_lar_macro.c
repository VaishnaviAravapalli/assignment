#include <stdio.h>
#define N 5
void main()
{
int a[100];
int i,j,temp;
printf("Enter the values");
for (i=0;i<N;i++)
{
    scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
    for(j=i+1;j<N;j++)
   {
     if(a[i]>a[j])
    {   
       temp = a[i];
       a[i]=a[j];
       a[j]=temp;
     }   
   }

  }
  printf("Second largest element is %d",a[N-2]);

}

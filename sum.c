#include<stdio.h>

int sum(int a[], int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	
		return (sum(a,n-1)+a[n-1]);
	
}
int main()
{
	int a[]={10,20,30,40,50},i;
	int n = sizeof(a)/sizeof(a[0]);
	int s=sum(a,n);
	printf("sum of array elements: %d",s);
	return 0;
}

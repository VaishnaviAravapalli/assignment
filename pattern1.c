 #include<stdio.h>

void main()
{
    int const n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }

        printf("\n");
        printf("-");
    }

}


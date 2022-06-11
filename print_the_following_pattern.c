#include<stdio.h>
int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==0 || j==i-1)
            {
                printf("*");
            }
            else
            {
                if(i!=n)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
        }
        for(k=i+1;k<n+1;k++)
        {
            printf(" ");
        }
        printf("
");
    }
}
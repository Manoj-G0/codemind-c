#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k,a=1,b=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<a+1;k++)
        {
            printf("%d",abs(k-b));
        }
        a+=2;
        b++;
        printf("
");
    }
}
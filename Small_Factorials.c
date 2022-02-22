#include<stdio.h>
int main()
{
    int n,i,a[100],j,fact=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=a[i];j>=1;j--)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
    }
}
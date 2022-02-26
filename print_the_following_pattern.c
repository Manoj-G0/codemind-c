#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("%c ",i+65);
        }
        printf("
");
    }
}
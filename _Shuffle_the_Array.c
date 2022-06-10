#include<stdio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int j=n/2;
    i=0;
    while(i!=j && j!=n)
    {
        printf("%d ",a[i]);
        printf("%d ",a[j]);
        i++;
        j++;
    }
}
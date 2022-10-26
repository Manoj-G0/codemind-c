#include<stdio.h>
int main()
{
    int n,a[100],k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[100];
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        b[k++]=a[i];
    }
    int s=k;
    for(int i=0;i<n-s;i++)
    b[k++]=1;
    for(int i=0;i<k;i++)
    printf("%d ",b[i]);
}
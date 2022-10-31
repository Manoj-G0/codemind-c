#include<stdio.h>
int main()
{
    int n,a[100],k,b[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    scanf("%d",&b[i]);
    int c[100];
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            for(int j=i;j>=b[i];j--)
            {
                c[j]=c[j-1];
            }
        }
        c[b[i]]=a[i];
    }
    for(int i=0;i<n;i++)
    printf("%d ",c[i]);
}
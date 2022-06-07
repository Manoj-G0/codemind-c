#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[100],i,s[100],k=0,t;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        t=n;
        for(i=0;i<=n/2;i++)
        {
            s[k++]=a[--t];
            s[k++]=a[i];
        }
        for(i=0;i<n-1;i++)
        printf("%d ",s[i]);
        printf("%d",s[n-1]);
        printf("
");
    }
}
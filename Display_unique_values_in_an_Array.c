#include<stdio.h>
int main()
{
    int n,a[100],i,j,f=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                f=1;
                count++;
                break;
            }
        }
        if(f==0)
        {
            printf("%d ",a[i]);
        }
    }
    if(count==n)
    printf("-1");
}
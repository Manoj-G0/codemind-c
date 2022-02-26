#include<stdio.h>
int main()
{
    int i,n,a[100],j,count=0,p,maxcount,x[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                count++;
                x[i]=-1;
            }
        }
        if(count>n/2)
        {
            p=a[i];
        }
    }
    printf("%d",p);
}
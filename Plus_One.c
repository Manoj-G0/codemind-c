#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0,r,b[100],k=0,x,s,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]!=0)
        {
            r=a[i]%10;
            sum=sum*10+r;
            a[i]=a[i]/10;
        }
    }
    x=sum+1;
    while(x!=0)
    {
        s=x%10;
        b[k]=s;
        x=x/10;
        k++;
        count++;
    }
    for(k=count-1;k>=0;k--)
    {
    printf("%d ",b[k]);
    }
}
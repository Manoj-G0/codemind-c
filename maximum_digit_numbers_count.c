#include<stdio.h>
int main()
{
    long long int n,i,a[100000],c=0,k=0,temp1,temp2,large=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    {
        temp1=a[i];
        c=0;
        while(temp1)
        {
            c++;
            temp1=temp1/10;
        }
        if(c>large)
        large=c;
    }
    for(i=0;i<n;i++)
    {
        temp2=a[i];
        k=0;
        while(temp2)
        {
            k++;
            temp2/=10;
        }
        if(k==large)
        {
            printf("%d ",a[i]);
        }
    }
}
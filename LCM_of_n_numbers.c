#include<stdio.h>
long long int lcm(long long int a,long long int b)
{
    long long int min,i,g,l;
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    l=a*b/g;
    return l;
}
int main()
{
    long long int n,a[1000],i,l;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    l=lcm(a[0],a[1]);
    for(i=2;i<n;i++)
    {
        l=lcm(l,a[i]);
    }
    printf("%lld",l);
}
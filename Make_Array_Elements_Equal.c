#include<stdio.h>
int main()
{
    int n,a[100],c=0,m=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(c>m)
        m=c;
    }
    if(m==n)
    printf("0");
    else
    printf("%d",m);
}
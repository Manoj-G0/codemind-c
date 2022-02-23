#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int a,temp;
    int n,sum=0,count=0,s,r,p=0,i,m;
    int j,q=0,diff,x=0;
    scanf("%ld",&a);
    scanf("%d",&n);
    temp=a;
    while(temp!=0)
    {
        m=temp%10;
        p=p*10+m;
        temp=temp/10;
    }
    for(i=0;i<n;i++)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    for(i=0;i<n;i++)
    {
        s=sum%10;
        count=count*10+s;
        sum=sum/10;
    }
    for(i=0;i<n;i++)
    {
        j=p%10;
        q=q*10+j;
        p=p/10;
    }
    diff=abs(count-q);
    printf("%d",diff);
    
}
#include<stdio.h>
int main()
{
    long int n;
    int i,r,sum=0,add=0,j,count=0,p=0,k;
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
        count++;
    }
        while(sum!=0)
        {
        j=sum%10;
        add=add+j;
        sum=sum/10;
        }
    while(add!=0)
    {
        k=add%10;
        p=p+k;
        add=add/10;
    }
    printf("%d",p);
}
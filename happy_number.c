#include<stdio.h>
int main()
{
    int n,i,temp,sum=0,r;
    scanf("%d",&n);
    temp=n;
    while(temp!=1 && temp!=4)
    {
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r;
            temp=temp/10;
        }
        temp=sum;
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    printf("False");
}
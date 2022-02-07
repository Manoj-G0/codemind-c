#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    scanf("%d",&n);
    if(n==0)
    printf("True");
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,i,count=0,sum=0,temp;
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        count++;
        i=i/10;
    }
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        count--;
        temp=temp/10;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
    
    
    
}
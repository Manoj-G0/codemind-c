#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
    int i=0,r,s=0,temp,sum=0,j,a[100];
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2!=0)
        {
            a[i]=pow(r,2);
            i++;
        }
        n=n/10;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]);
}
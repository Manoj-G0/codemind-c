#include<stdio.h>
int main()
{
    int n,m,i,sum=0,even=1,odd=0,k=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        k+=i;
        if(k%2==1)
        {
            sum=sum+even;
            odd++;
        }
        else
        {
            sum+=odd;
            even++;
        }
    }
    printf("%d",sum);
}
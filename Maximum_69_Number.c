#include<stdio.h>
int main()
{
    int num ,ans=0,mul=1;;
    scanf("%d",&num);
    int arr[4];
    int i=3;
    while(num!=0)
    {
        arr[i--]=num%10;
        num/=10;
    }
    for(i=0;i<=3;i++)
    {
        if(arr[i]==6)
        {
            arr[i]=9;break;
        }
    }
    for(i=3;i>=0;i--)
    {
        ans+=(mul*arr[i]);
        mul*=10;
    }
    printf("%d",ans);
}
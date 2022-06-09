#include<stdio.h>
void nwdiioogn(int a,int b,int n)
{
    int i;
    if(n==0)
    {
        printf("%d ",a);
        return;
    }
    for(i=b+1;i<10;i++)
    {
        nwdiioogn(a*10+i,i,n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    printf("0 ");
    nwdiioogn(0,0,n);
}
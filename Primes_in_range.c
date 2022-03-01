#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,count=0,sum=0,flag=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i==1)
        continue;
        flag=0;
        for(j=2;j<=sqrt(i);++j)
        {
            if(i%j==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
        sum++;
    }
    printf("%d",sum);
}
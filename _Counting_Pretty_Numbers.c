#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int m,n,i,count=0,r;
        scanf("%d%d",&m,&n);
        for(i=m;i<=n;i++)
        {
            r=i%10;
            if(r==2 || r==3 || r==9)
            {
                count++;
            }
            
        }
        printf("%d
",count);
    }
}
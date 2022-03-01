#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,a;
        scanf("%d%d",&n,&a);
        if(n==1 && (a&1)==0)
        printf("Even
");
        else if((a&1)==1)
        {
            if((n&1)==1)
            printf("Odd
");
            else
            printf("Even
");
        }
        else
        printf("Impossible
");
    }
}
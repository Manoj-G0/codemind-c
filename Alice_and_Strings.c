#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100],b[100];
        int flag=0,i;
        scanf("%s",a);
        scanf(" %s",b);
        for(i=0;a[i]!=NULL;i++)
        {
            if(b[i]-a[i]<0)
            {
                printf("NO
");
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("YES
");
    }
}
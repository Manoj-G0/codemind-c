#include<stdio.h>
int main()
{
    char s[100];
    int i,j,flag=0,a;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        flag=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
    printf("%d ",i);
    break;
        }
    }
    if(flag!=0)
    printf("-1");
    
}
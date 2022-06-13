#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int sum=0,i;
    for(i=0;s[i]!=':';i++)
    {
        sum=sum*10+(int)s[i]-'0';
    }
    if(sum==12 && s[6]=='A')
    {
        sum=sum-12;
        printf("0%d:%c%c",sum,s[3],s[4]);
    }
    else if(sum==12 && s[6]=='P')
    {
        printf("%d:%c%c",sum,s[3],s[4]);
    }
    else if(sum<12 && s[6]=='P')
    {
        sum=sum+12;
        printf("%d:%c%c",sum,s[3],s[4]);
    }
    else if(sum<12 && s[6]=='A')
    {
        if(sum>=10)
        {
           printf("%d:%c%c",sum,s[3],s[4]); 
        }
        else
        {
        printf("0%d:%c%c",sum,s[3],s[4]);
        }
    }
    else
    {
        printf("%d:%c%c",sum,s[3],s[4]);
    }
}
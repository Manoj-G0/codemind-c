#include<stdio.h>
int main()
{
    char s[1000];
    int i,count=0;
    char n;
    scanf("%[^
]s",s);
    scanf(" %c",&n);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==n)
        count++;
    }
    if(count>0)
    printf("%d",count);
    else
    printf("-1");
}
#include<stdio.h>
int main()
{
    char s[100];
    int i,count=0,sum=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        count++;
        else if(s[i]=='o')
        sum++;
    }
    if(2*count==sum)
    printf("Yes");
    else
    printf("No");
}
#include<stdio.h>
int main()
{
    char str[100];
    int i,len;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        len=i;
    }
    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
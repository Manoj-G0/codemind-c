#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf(" %s",s2);
    int len=strlen(s1);
    int flag=0,c=0,i,j;
    for(i=0;s1[i]!=NULL;i++)
    {
        flag=0;
        for(j=0;s2[j]!=NULL;j++)
        {
            if(s1[i]==s2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            c++;
            s2[j]='z';
        }
    }
    if(c==len)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
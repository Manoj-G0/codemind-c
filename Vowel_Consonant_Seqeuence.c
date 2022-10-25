#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int c=0;
    char st[100];
    for(int i=0;s[i]!=NULL;i++)
    {
        if((s[i]=='a' || s[i]=='e' || s[i]=='i'||
            s[i]=='o' || s[i]=='u') && (c==0 || st[c-1]=='C'))
            {
                st[c++]='V';
            }
        else if(c==0 || st[c-1]=='V')
        {
            st[c++]='C';
        }
    }
    for(int i=0;i<c;i++)
    printf("%c",st[i]);
}
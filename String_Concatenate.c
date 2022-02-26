#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100],s2[100],temp;
    int n,i,j;
    scanf("%[^
]s",s);
    scanf(" %[^
]s",s1);
    strcat(s,s1);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("%s",s);
}
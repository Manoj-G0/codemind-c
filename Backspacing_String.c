#include<stdio.h>
#include<string.h>
char s1[100],t1[100];
int k,x;
void pop1()
{
    s1[k-1]=NULL;
    k--;
}
void pop2()
{
    t1[x-1]=NULL;
    x--;
}
int main()
{
    char s[100],t[100];
    int i,c=0,j,val,m;
    scanf("%[^
]s",s);
    scanf(" %[^
]s",t);
    int len1=strlen(s)-1,len2=strlen(t)-1;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]!='#')
        {
            s1[k++]=s[i];
        }
        else
        {
            pop1();
        }
    }
    for(i=0;t[i]!=NULL;i++)
    {
        if(t[i]!='#')
        {
            t1[x++]=t[i];
        }
        else
        {
            if(x>0)
            {
                pop2();
            }
        }
    }
    j=0;
    for(i=0;i<k;i++,j++)
    {
        if(s1[i]!=t1[j])
        {
            printf("False");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
}
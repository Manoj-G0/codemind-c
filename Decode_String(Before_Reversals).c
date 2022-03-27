#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,j;
        char s[100],temp;
        scanf("%d%d",&a,&b);
        scanf("%s",s);
        while(b)
        {
            i=b-1;
            j=0;
            while(j<i)
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
                j++;
                i--;
            }
            b--;
        }
        printf("%s
",s);
        
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    int i,c=0;
    scanf("%s",s);
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
        }
    }
    if(c%3==0)
    printf("Sudhir");
    else
    printf("Ashok");
}
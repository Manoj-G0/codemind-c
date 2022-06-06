#include <stdio.h>
#include <string.h>
int isAlphabet(char ch)
{
    return ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'));
}
 
void reverse(char *s)
{
    int r=strlen(s)-1,l=0;
    while (l<r) {
        if (!isAlphabet(s[l]))
            l++;
        else if (!isAlphabet(s[r]))
            r--;
        else {
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
    }
}
int main()
{
    char s[100];
    scanf("%s",s);
    reverse(s);
    printf("%s
", s);
    return 0;
}
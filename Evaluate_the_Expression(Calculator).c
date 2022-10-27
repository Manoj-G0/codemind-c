#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct number {
    int sign;
    int sum;
};

int calculate(char * a){
    struct number *st = (struct number *)malloc(strlen(a)*sizeof(struct number));
    int num = 0;
    st->sum = 0;
    st->sign = 1;
    for (int i = 0; i<strlen(a); i++) 
    {
        if (a[i] >= '0' && a[i] <= '9') 
        {
            num = num * 10 + (a[i] - '0');
        } 
        else if (a[i] == '-') 
        {
            st->sum += st->sign * num;
            num = 0;
            st->sign = -1;
        } 
        else if (a[i] == '+') 
        {
            st->sum += st->sign * num;
            num = 0;
            st->sign = 1;
        } 
        else if (a[i] == '(') 
        {
            st++;
            st->sum = 0;
            st->sign = 1;
        } 
        else if (a[i] == ')') 
        {
            st->sum += st->sign * num;
            num = st->sum;
            st--;
        }
        else
        continue;
    }
    st->sum += st->sign * num;
    return st->sum;
}
int main()
{
    char s[100];
	scanf("%[^
]s",s);
	printf("%d",calculate(s));
}
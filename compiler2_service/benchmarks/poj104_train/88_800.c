#include <header.h>

int main_bench()
{
    char s[1000];
    int i,l;
    gets(s);
    l=strlen(s);
    for (i=0;i<l-1;i++)
    {
        if (isdigit(s[i]))
        my_printf("%c",s[i]);
        if (isdigit(s[i])&&isdigit(s[i+1])==0)
        my_printf("\n");
    }
    if (isdigit(s[l-1]))
    my_printf("%c",s[l-1]);
    return 0;
}
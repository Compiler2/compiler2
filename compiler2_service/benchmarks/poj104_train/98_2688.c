#include <header.h>

int main_bench()
{
    int n,c=0;
    my_scanf("%d",&n);
    char s[41];
    my_scanf("%s",s);
    my_printf("%s",s);
    n--;
    c=strlen(s)+1;
    while(n--)
    {
        my_scanf("%s",s);
        c+=strlen(s);
        if(c>80)
        {
            c=strlen(s)+1;
            my_printf("\n");
            my_printf("%s",s);
        }
        else
        {
            my_printf(" %s",s);
            c++;
        }
    }
}


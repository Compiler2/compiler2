#include <header.h>


int main_bench()
{
    char a[10000];
    int i,s=0;
    gets(a);
    for (i=0;i<strlen(a);i++)
    {
        if (a[i]!=' ')
        s=s+1;
        else if (a[i]!=a[i-1])
        {
            my_printf("%d",s);
            if (i+1<strlen(a)) my_printf(",");
            s=0;
        }
    }
    my_printf("%d",s);

    return 0;
}

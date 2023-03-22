#define NUM_ITER 1334393

#include <header.h>

int main_bench()
{
    char str[101],a[101];
    int n,i,j,k;
    gets(str);
    n=strlen(str);
    j=0;

    for (i=0;i<n;i++)
    {
        if (str[i]!=' ')
            my_printf("%c",str[i]);
            if (str[i]==' ')
            {
                if (str[i+1]!=' ')
                    my_printf(" ");
                }
    }
    return 0;
}
#include <header.h>

int main_bench()
{
    char str[210];
    int i,n;
    gets(str);
    my_printf("%c",str[0]);
    for(i=1,n=strlen(str);i<n;i++)
    {
        if(str[i]==' '&&str[i-1]==' ');
        else
            my_printf("%c",str[i]);
    }
    my_printf("\n");
    }
        
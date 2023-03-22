#include <header.h>

main_bench()
{
    int i;
    char str[100];
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '&&str[i+1]!=' ')
    my_printf(" ");
    if(str[i]!=' ')
    my_printf("%c",str[i]);
    i++;
    }
}
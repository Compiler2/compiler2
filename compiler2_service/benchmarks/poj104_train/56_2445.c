#include <header.h>


int main_bench()
{
    char num[7];
    gets(num);
    int i;
    for (i=1;i<=strlen(num);i++)
        my_printf("%c",num[strlen(num)-i]);
    my_printf("\n");
    
}
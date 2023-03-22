#include <header.h>

int main_bench()
{
    int i;
    char a[5]={'\0','\0','\0','\0','\0'};
    my_scanf("%s",a);
    for(i=4;i>=0;i--)
    {
        if(a[i]!='\0')my_printf("%c",a[i]);
    }
}

#include <header.h>

int main_bench()
{
    char a[101];
    int i,l,m;
    gets(a);
    l=strlen(a);
    my_printf("%c",a[0]); 
    for(i=1;i<l;i++)
    {
         if(a[i]!=' ') my_printf("%c",a[i]);
         else if(a[i]==' '&&a[i-1]!=' ') my_printf("%c",a[i]);
         else if(a[i]==' '&&a[i-1]==' ') continue;
    }
    getchar();
}
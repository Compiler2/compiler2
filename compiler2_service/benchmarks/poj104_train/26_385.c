#include <header.h>

int main_bench()
{
    char a[1000];
    gets(a);
    int k=0;
    int i,l;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
                    if (a[i]!=' ')
                    {k=0;
                    my_printf("%c",a[i]);}
                    else 
                    {
                         k++;
                         if (k==1)
                         my_printf("%c",a[i]);
                    }
    }
    getchar();
}


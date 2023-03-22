#include <header.h>


int main_bench()
{
        char a[101];
        int i;
        gets(a);

        for (i=0;i<strlen(a);i++) {
                if (a[i]!=' ')
                        my_printf("%c",a[i]);
                else if (a[i]==' ') {
                        if (a[i+1]==' ') {
                                do {
                                        ++i;
                                } while (a[i]==' ');
                                my_printf(" ");


                                my_printf("%c",a[i]);
                        } else my_printf(" ");
                }

        }

        return 0;
}


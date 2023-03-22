#include <header.h>


int main_bench()
{
    char a[1000];
    int i,j,k,n,l,f;
    gets(a);
    for(i=0;i<=strlen(a)-2;i++){
                                n=a[i]+a[i+1];
                                my_printf("%c", n);
                                }
                                n=a[strlen(a)-1]+a[0];
    my_printf("%c", n);
    return 0;
    }

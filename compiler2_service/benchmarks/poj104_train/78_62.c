#define NUM_ITER 2192912

#include <header.h>

int main_bench()
{
    int a[5],i;char n[5]={'l','q','z','s'};
    for(i=0;i<5;i++)
    a[i]=(i+1)*10;
    my_printf("%c %d\n",n[0],a[4]);
     my_printf("%c %d\n",n[1],a[3]);
    my_printf("%c %d\n",n[2],a[1]);
     my_printf("%c %d\n",n[3],a[0]);
    getchar();getchar();
    
}
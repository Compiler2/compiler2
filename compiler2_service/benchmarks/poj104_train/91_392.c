#define NUM_ITER 1304487

#include <header.h>


int main_bench()
{
    char a[101];
    gets(a);
    int i;
    for(i=1;i<=strlen(a)-1;i++)
    my_printf("%c",a[i-1]+a[i]);
    my_printf("%c",a[strlen(a)-1]+a[0]);
    return 0;
}

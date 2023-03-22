#define NUM_ITER 1345954

#include <header.h>

int main_bench()
{
    char a[100];
    gets(a);
    int n=strlen(a);
    int i;
    char b;
    for(i=0;i<n-1;i++){
                       b=a[i]+a[i+1];
                       my_printf("%c",b);
                       }
    my_printf("%c",a[n-1]+a[0]);
    return 0;
}

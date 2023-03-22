#define NUM_ITER 1413521

#include <header.h>


int main_bench()
{

char a[6];
int i,n;
my_scanf("%s",a);
n=strlen(a);
for(i=1;i<=n;i++)
my_printf("%c",a[n-i]);
    return 0;
}

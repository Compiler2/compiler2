#define NUM_ITER 35318

#include <header.h>


int main_bench()
{
    int n, i, j, count;
    char a[50], b[50];
    my_scanf("%d", &n);
    my_scanf("%s", a);
    my_printf("%s", a);
    count=strlen(a);
    for(i=2; i<=n; i++)
    {
        my_scanf("%s", a);
        if(a[0]=='k')
            my_printf("");
        count=count+1+strlen(a);
        if(count<=80)
        {
            my_printf(" %s", a);
        }
        else
        {
            my_printf("\n%s", a);
            count=strlen(a);
        }
    }
    my_printf("\n");
    return 0;
}

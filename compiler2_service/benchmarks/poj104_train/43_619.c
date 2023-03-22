#define NUM_ITER 13219

#include <header.h>

int number(int n)
{
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    return 0;
    return 1;
}
int main_bench()
{
    int m,i;
    my_scanf("%d", &m);
    for(i=3;i<m;i=i+2)
    {
    if(number(i)&&number(m-i))
    {
                              if(i<=m-i)
                              my_printf("%d %d\n", i, m-i);
                              
    }
    }

    return 0;
}     

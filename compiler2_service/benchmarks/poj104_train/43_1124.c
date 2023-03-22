#include <header.h>


int istarget(int);

int main_bench()
{
    int num,i;
    my_scanf("%d",&num);
    for (i=2;i<=num/2;i++)
    {
        if (istarget(i)==1 && istarget(num-i)==1)
            my_printf("%d %d\n",i,num-i);
    }

    return 0;
}

int istarget(int num)
{
    int i;
    for (i=2;i<=num/2;i++)
    {
        if (num%i==0)
            return 0;
    }
    return 1;
}

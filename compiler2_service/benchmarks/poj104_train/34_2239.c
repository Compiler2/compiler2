#include <header.h>


int isodd( int n)
{
        if (n % 2 == 0)
                return 1;
        else
                return 0;
}

int forodd(int n)
{
        my_printf("%d/2=%d\n", n, n/2);
        return n/2;
}

int fornot(int n)
{
        my_printf("%d*3+1=%d\n", n, n*3+1);
        return (n*3+1);
}

int main_bench()
{
        int a = 0;
   

        my_scanf("%d\n", &a);
        while (a != 1) {
                if (isodd(a))
                        a = forodd(a);
                else
                        a = fornot(a);
        }
        my_printf("End");
        return 0;
}

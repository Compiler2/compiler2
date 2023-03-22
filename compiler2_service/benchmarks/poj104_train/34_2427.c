#include <header.h>

int main_bench()
{
    int a,b,c;
    my_scanf ("%d",&a);
    if (a==1)
    my_printf("End");
    else
    {
    do
    {b=a%2;
    if (b==0)
    {
    c=a/2;
    my_printf ("%d/2=%d\n",a,c);
    a=a/2;
    }
    else 
    {
    c=a*3+1;
    my_printf ("%d*3+1=%d\n",a,c);
    a=a*3+1;
    }
}

    while (a>1);

    my_printf("End");
}
    getchar();
    getchar();
}

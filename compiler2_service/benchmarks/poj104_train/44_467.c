#include <header.h>

int reverse(int num)
{
    int a[100];
    int x,b,answer;
    answer=0;
    if(num<0)
    x=-num;
    else
    x=num;
    while (x!=0)
    {
        b=x%10;
        answer=answer*10+b;
        x=x/10;
    }
    if(num<0)
    answer=-answer;
    return answer;
}
main_bench()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    my_scanf("%d",&a);
    my_scanf("%d",&b);
    my_scanf("%d",&c);
    my_scanf("%d",&d);
    my_scanf("%d",&e);
    my_scanf("%d",&f);
    my_printf("%d",reverse(a));
    my_printf("\n");
    my_printf("%d",reverse(b));
    my_printf("\n");
    my_printf("%d",reverse(c));
    my_printf("\n");
    my_printf("%d",reverse(d));
    my_printf("\n");
    my_printf("%d",reverse(e));
    my_printf("\n");
    my_printf("%d",reverse(f));
    my_printf("\n");
}

 

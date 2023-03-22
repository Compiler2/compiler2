#include <header.h>

int main_bench()
{
    int w,i,n;
    my_scanf("%d", &w);
    n=w+12; if(n%7==5) my_printf("1\n");
    n+=31; if(n%7==5) my_printf("2\n");
    n+=28; if(n%7==5) my_printf("3\n");
    n+=31; if(n%7==5) my_printf("4\n");
    n+=30; if(n%7==5) my_printf("5\n");
    n+=31; if(n%7==5) my_printf("6\n");
    n+=30; if(n%7==5) my_printf("7\n");
    n+=31; if(n%7==5) my_printf("8\n");
    n+=31; if(n%7==5) my_printf("9\n");
    n+=30; if(n%7==5) my_printf("10\n");
    n+=31; if(n%7==5) my_printf("11\n");
    n+=30; if(n%7==5) my_printf("12\n");
    return 0;
}

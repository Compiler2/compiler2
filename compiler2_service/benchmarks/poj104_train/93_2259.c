#include <header.h>


void print(int, int);
int flag;

int main_bench()
{
    int a3 = 0, a5 = 0, a7 = 0;
    int n;

    my_scanf("%d", &n);
    a3 = (n%3)==0?1:0;
    a5 = (n%5)==0?1:0;
    a7 = (n%7)==0?1:0;

    if (a3+a5+a7 == 0) {
        my_printf("n");
        return 0;
    }

    print(a3, 3);
    print(a5, 5);
    print(a7, 7);

    return 0;
}
    
void print(int a, int num)
{
    if (a) {
        if (flag)
            my_printf(" %d", num);
        else
            my_printf("%d", num);
        flag = 1;
    }
}
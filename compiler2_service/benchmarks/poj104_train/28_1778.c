#include <header.h>


int main_bench()
{
    int out=0;
    char input[123456];
    while(my_scanf("%s", input)>0){
        if(out++) putchar(',');
        my_printf("%d", strlen(input));
    }
    return 0;
}

#define NUM_ITER 1236566

#include <header.h>

int main_bench()
{
    char input_number[30];
    gets(input_number);

    int indicator;
    int cool=0;
    for(indicator=0;indicator<strlen(input_number);indicator++)
    {
        if(isdigit(input_number[indicator]))
        {
        cool=0;
        putchar(input_number[indicator]);
        }
        else if(cool==0)
        {
            my_printf("\n");
            cool=1;
        }
    }
    return 0;
}
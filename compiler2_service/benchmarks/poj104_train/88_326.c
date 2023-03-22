#include <header.h>

int main_bench()
{
    char input[31];
    int i;    


    for(i = 0; i < 31; i ++)
        input[i] = '\0';

    gets(input);

    for(i = 0; i < 30; i ++)
        if(input[i] >= '0' && input[i] <= '9')
        {
           
            my_printf("%c", input[i]);
			
        }
        else
        {
            my_printf("\n");
        }

        return 0;
}

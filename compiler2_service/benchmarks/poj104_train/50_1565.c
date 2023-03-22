#include <header.h>


int main_bench()
{

    
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    
    
    
    int startDay, xMonthThirteenth = 13;
    int whatDay, i;

    my_scanf("%d", &startDay);
    xMonthThirteenth += (startDay - 1); 
    for(i = 0; i < 12; i ++)
    {
        whatDay = xMonthThirteenth % 7;
        if(whatDay == 5)
            my_printf("%d\n", i + 1);
        xMonthThirteenth += days[i];
    }

	return 0;
}

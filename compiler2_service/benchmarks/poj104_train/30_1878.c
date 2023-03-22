#include <header.h>


int main_bench()
{
	int n, i, sum = 0;
	my_scanf("%d", &n);
    for(i = 1; i <= n; i++)
	{	
		
		sum = sum + i * i;
		if(i % 7 == 0 || i % 10 == 7 || i - 70 == 1 || i - 70 == 2 || i - 70 == 3 || i - 70 == 4 || i - 70 == 5 || i - 70 == 6 || i - 70 == 8 || i - 70 == 9){
		   sum = sum - i * i;
	
		}
	
    }
	
	my_printf("%d", sum);
	return 0;
}
#define NUM_ITER 78429

#include <header.h>






int main_bench()
{
	int n, y, t, sum = 0, a; 
	my_scanf("%d", &n);         
	
	
	for (int i = 1; i <= n; i++)
	{
		t = i % 7;           
		
		
		if (t != 0)      
		{
			y = i % 10;     
			a = i / 10;     
            
            
			if (y != 7 && a != 7)     
			{
				sum = sum + i * i;  
			}
		}
    }
	my_printf("%d", sum);      
	return 0;
}
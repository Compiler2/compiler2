#define NUM_ITER 124987

#include <header.h>

int main_bench()
{
	char c[31];
	char ch;
	int i,pd_num,pd_end;  
	
	

	for (i=0;i<31;i++)
		c[i] = 'A';          

	gets(c);

	for (i=0;i<31;i++)              
	{
		pd_num = 0;
		for (ch='0';ch<='9';ch++)          
			if (c[i]==ch)
				pd_num = 1;      

		if (pd_num)       
		{
			pd_end = 0;                      
			my_printf("%c",c[i]);
		}
		else              
		{
			if (pd_end==0)         
				my_printf("\n");
			pd_end = 1;
		}
	}
	return 0;
}
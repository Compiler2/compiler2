#define NUM_ITER 27901

#include <header.h>

int main_bench()
{
	int n,i,j,k,l;
	my_scanf("%d",&n);
	for(i=1;i<=365;i++)
	{
		if(i%7+n==6||i%7+n==13)
		{
			if(i==13)
				my_printf("1\n");
			if(i==44)
				my_printf("2\n");
			if(i==72)
				my_printf("3\n");
			if(i==103)
				my_printf("4\n");
			if(i==133)
				my_printf("5\n");
			if(i==164)
				my_printf("6\n");
			if(i==194)
				my_printf("7\n");
			if(i==225)
				my_printf("8\n");
			if(i==256)
				my_printf("9\n");
			if(i==286)
				my_printf("10\n");
			if(i==317)
				my_printf("11\n");
			if(i==347)
				my_printf("12\n");
		}
	}
	
	return 0;
}

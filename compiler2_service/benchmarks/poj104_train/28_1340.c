#define NUM_ITER 418935

#include <header.h>

int main_bench()
{
	char a[300];
	int i=0 ,n=0;
	while (1==1)
	{
		n=getchar();
		if(n==' ')
		{	
			if(i!=0)
			{
				my_printf("%d,",i);
				i=0;
			}
		}
		else if(n!='\0'&&n!='\n')
		{
			i++;	
		}
		else if(n=='\n')
		{
			my_printf("%d",i);
			break;
		}
	}
}

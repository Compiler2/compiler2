#define NUM_ITER 1252171

#include <header.h>


int main_bench()
{
	char z[2050];
	gets(z);
	int i=0;
	int n=strlen(z);
	int record=0;
	int q=0;
	z[n]=' ';
	for(i=0;i<=n;i++)
	{
		if(z[i]==' ' && z[i-1] != ' ')
		{
			if(q==0)
			{
				my_printf("%d",record);
				q=1;
			}
			else
			{
				my_printf(",%d",record);
			}
			record=0;
		}
		else if(z[i] != ' ')
		{
			record++;
		}
	}
	return 0;
}
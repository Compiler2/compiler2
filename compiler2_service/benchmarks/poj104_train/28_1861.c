#define NUM_ITER 1341328

#include <header.h>

int main_bench()
{
	int i,end,j,lon,st;
	char a[100000];
	int b[300];
	gets(a);
	lon=strlen(a);
	end=0;
	j=0;
	for(i=0;i<lon;i++)
	{
		if((a[i]==' ')&&(st==0))
		{
			b[j]=end;
			end=0;
			j++;
			st=1;
		}
		else if(a[i]!=' ')
		{
			end++;
			st=0;
		}
	}
	b[j]=end;
	for(i=0;i<j;i++)
		my_printf("%d,",b[i]);
	my_printf("%d",b[j]);


	
	return 0;
}
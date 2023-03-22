#define NUM_ITER 415246

#include <header.h>

int main_bench()
{
	int i=0,j=0,t;
	char a[20][20],c;
	while((c=getchar())!='\n')
	{
		if(c!=' ')
		{
			a[i][j]=c;
			j++;
		}
		else 
		{
			a[i][j]='\0';
			j=0;
		
			
			i++;
		}
	}
	a[i][j]='\0';
	for(t=i;t>0;t--)
		my_printf("%s ",a[t]);
	my_printf("%s",a[0]);
}
#define NUM_ITER 268867

#include <header.h>

int main_bench()
{
	char a[10000];
	int i=0,k=0,m=1,b[300]={0},l=0;
	while((a[i]=getchar())!='\n')
	{
		i++;k++;
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==' '&&a[i+1]!=' ')
		{
			m++;l++;
		}
		if(a[i]!=' ')
			b[l]++;
	}
	for(i=0;i<m-1;i++)
		my_printf("%d,",b[i]);
	my_printf("%d",b[m-1]);
}
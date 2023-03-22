#define NUM_ITER 283096

#include <header.h>

int main_bench()
{
	char a[100],c;
	int i=0,j;
	while((c=getchar())!='\n')
	{
		a[i]=c;
		i++;
	}
	for(j=0;j<i-1;j++)
		my_printf("%c",a[j]+a[j+1]);
	my_printf("%c",a[i-1]+a[0]);
	return 0;
}
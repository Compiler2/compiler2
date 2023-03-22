#define NUM_ITER 31660

#include <header.h>


int main_bench()
{
	int n, i, length=0;
	char a[1000][42];
	my_scanf("%d", &n);
	my_scanf("%s", a[0]);
	my_printf("%s", a[0]);
	length=strlen(a[0]);
	for(i=1; i<n; i++)
	{
		my_scanf("%s", a[i]);
		length=length+strlen(a[i])+1;
		if(length<=80)
			my_printf(" %s", a[i]);
		else
		{
			my_printf("\n");
			my_printf("%s", a[i]);
			length=strlen(a[i]);
		}
	}
	return 0;
}
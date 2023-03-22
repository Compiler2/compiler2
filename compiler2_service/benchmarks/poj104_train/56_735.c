#define NUM_ITER 1321476

#include <header.h>

int main_bench()
{
	char a[6];
	int b,c,i;
	my_scanf("%s",a);
	b=strlen(a);
	for(i=0;i<(b-1)/2;i++)
	{
			a[i]=a[b-i-1]+a[i];
			a[b-i-1]=a[i]-a[b-i-1];
			a[i]=a[i]-a[b-i-1];
	}
	my_printf("%s\n",a);
}
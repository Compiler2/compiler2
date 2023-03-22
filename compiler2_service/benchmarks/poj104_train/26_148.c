#define NUM_ITER 150132

#include <header.h>

int main_bench()
{
	char a[110]={0};
	int i,n;
	for(i=0;i<110;i++)
	{
		my_scanf("%c", &a[i]);
		if(a[i]==' ' && a[i-1]==' ') i-=1;
		if(a[i]=='\n')
		{
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%c", a[i]);
	}
	my_printf("\n");
    return 0;
}
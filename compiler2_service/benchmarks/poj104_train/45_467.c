#define NUM_ITER 139355

#include <header.h>

int main_bench()
{
	char s[200],w[100];
	
	int i;
	my_scanf("%s %s",s,w);
	
	
	for (i=0;i<100;i++)
		if (w+i==strstr(w,s))
		{
			my_printf("%d",i);
			break;
		}
}

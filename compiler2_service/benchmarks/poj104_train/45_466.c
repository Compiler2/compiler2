#define NUM_ITER 283840

#include <header.h>

int main_bench()
{
	char s[200],w[100];
	char *p;
	int i;
	my_scanf("%s %s",s,w);
	
	 p=strstr(w,s);
	for (i=0;i<100;i++)
		if (w+i==p)
		{
			my_printf("%d",i);
			break;
		}
}
#define NUM_ITER 150633

#include <header.h>

int main_bench()
{
	int i,s,n;
	char c[1000];
	for(i=0,n=0;;i++)
	{
		my_scanf("%c",&c[i]);
		if(c[i]=='\n')break;
		n++;
	}
	for(i=0;i<n-1;i++)
	{
		s=c[i]+c[i+1];
		my_printf("%c",s);
	}
	s=c[n-1]+c[0];
	my_printf("%c",s);
	return 0;
}
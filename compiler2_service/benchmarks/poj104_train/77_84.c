#define NUM_ITER 931014

#include <header.h>

int main_bench()
{
	
	char s[1000];
	my_scanf("%s",s);
	char boy=s[0];
	int m[1000]={0};
	int i,j=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==boy)
		m[j++]=i;
		else if(s[i]!=boy)
			my_printf("%d %d\n",m[--j],i);
	}
	return 0;
}
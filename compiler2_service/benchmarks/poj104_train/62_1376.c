#define NUM_ITER 73908

#include <header.h>

int main_bench()
{
	int i,n,m=0,k;
	char *a;
	a=(char *)malloc(10000*sizeof(char));
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i)==' '&&*(a+i+1)==' ')
			continue;
		else my_printf("%c",*(a+i));
	}
}

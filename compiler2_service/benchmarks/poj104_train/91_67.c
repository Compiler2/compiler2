#define NUM_ITER 1547606

#include <header.h>



int main_bench()
{
	char sz[101],*p,first;
	p=sz;
	gets(p);
	first=*p;
	for(;*(p+1)!='\0';p++){
		*p=*p+*(p+1);
	}
	*p+=first;
	*(p+1)='\0';
	my_printf("%s",sz);
	return 0;
}
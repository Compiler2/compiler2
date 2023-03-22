#define NUM_ITER 1052313

#include <header.h>

int main_bench()
{
	char c1[100],c2[100],*p;
	int i,j,k,n=0,m;
	my_scanf("%s",c1);
	my_scanf("%s",c2);
	p=strstr(c2,c1);
	for(i=0;c2[i]!='\0';i++)
		if(&c2[i]==p)break;
	my_printf("%d",i);
}
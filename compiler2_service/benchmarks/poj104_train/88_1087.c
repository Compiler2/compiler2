#define NUM_ITER 194158

#include <header.h>

int main_bench()
{
	char a[100],*p,*q;
	int i;
	p=a;
	q=a;
	for(i=1;i<=30;i++,p++)
	{
		my_scanf("%c",p);
	if(*p=='\0')
		break;
	}
	for(i=1;i<=30;i++,q++)
	{
		if(*q>=48&&*q<=57)
			my_printf("%c",*q);
		else if(*(q-1)>=48&&*(q-1)<=57)
			my_printf("\n");
	}
	return 0;
}
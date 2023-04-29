#define NUM_ITER 1454069

#include <header.h>

int main_bench()
{
	char n[5];
	char *p;
	int l,a,b;
	my_scanf("%s",&n);
	p=n;
	l=strlen(n);
	if(l==1)
	{
		my_printf("%s",n);
	}
	else if(l==2)
	{
		a=*p;
		*p=*(p+1);
		*(p+1)=a;
		my_printf("%s",n);
	}
	else if(l==3)
	{
		a=*p;
		*p=*(p+2);
		*(p+2)=a;
		my_printf("%s",n);
	}
	else if(l==4)
	{
		a=*p;
		b=*(p+1);
		*p=*(p+3);
		*(p+1)=*(p+2);
		*(p+3)=a;
		*(p+2)=b;
		my_printf("%s",n);
	}
	else if(l==5)
	{
		a=*p;
		b=*(p+1);
		*p=*(p+4);
		*(p+1)=*(p+3);
		*(p+4)=a;
		*(p+3)=b;
		my_printf("%s",n);
	}
	return 0;
}
#define NUM_ITER 1421379

#include <header.h>

int main_bench()
{
	int i;
	char a[1000];
	char b[1000];
	gets(a);
	char *p1,*p2;
	p1=a;
	p2=b;
	int c,d;
	for(i=0;;i++)
	{
		if(*(p1+i+1)=='\0')
		{
				c=*(p1+i);
				d=*(p1);
				*(p2+i)=c+d;
				break;
		}
		
		c=*(p1+i);
		d=*(p1+i+1);
		*(p2+i)=c+d;
		my_printf("%c",*(p2+i));
	}
	int l;
	my_printf("%c",c+d);
}
	
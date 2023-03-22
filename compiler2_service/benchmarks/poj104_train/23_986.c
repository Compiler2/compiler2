#include <header.h>


int main_bench()
{
	char a[101],*p1,*p2,*p;
	gets(a);
	for(p1=a;*p1!='\0';p1++);
	p2=p1;
	do{
		p1--;
		while(*p1!=' '&&p1>a) p1--;
		if(p1!=a)
		{
			for(p=p1+1;p<p2;p++) my_printf("%c",*p);
		    my_printf(" ");
		}
		else
			for(p=p1;p<p2;p++) my_printf("%c",*p);
		p2=p1;
	}while(p1>a);
	return 0;
}

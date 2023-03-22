#define NUM_ITER 1350788

#include <header.h>

int main_bench()
{   char a[100],b[100];
	char *p,*q;
	int i,n;
	gets(a);
	n=strlen(a);
	p=&a[0];
	q=&a[1];
	i=0;
    while(n>1)
	{ b[i++]=*p+*q;
	 p++;
	 q++;
	 n--;
	}
	b[i]=a[0]+*p;
	b[i+1]='\0';
	my_printf("%s",b);
}
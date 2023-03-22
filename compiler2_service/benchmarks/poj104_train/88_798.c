#define NUM_ITER 912877

#include <header.h>

int main_bench()
{
	int i,l,k=0,j;
	char *p,*a;
	a=calloc(30,sizeof(char));
	p=a;
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)>=48&&*(p+i)<=57&&k==2) my_printf("\n");
		if(*(p+i)>=48&&*(p+i)<=57) {my_printf("%c",*(p+i));k=1;}
		else k=2;
	}
}
#define NUM_ITER 1318462

#include <header.h>

int main_bench()
{
	char str[200],*p,wd;
	int i,n;
	gets(str);
	p=str;
	n=strlen(p);
	for(i=0;i<n;i++)
	{if(i!=n-1){wd=*(p+i)+*(p+i+1);
	my_printf("%c",wd);}
	else {wd=*(p+0)+*(p+i);
	my_printf("%c",wd);}}

	

}
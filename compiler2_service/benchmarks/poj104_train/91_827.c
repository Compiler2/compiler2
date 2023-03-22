#define NUM_ITER 1479538

#include <header.h>

int main_bench()
{
	
	char str[102],str1[102],*p,*q;
	gets(str);
	p=str;
	q=str1;
	for(p=str;*(p+1)!='\0';)
	{
		*q++=*p+(*++p);
	}
	if(*(p+1)=='\0'){*q++=(*p)+*str;}
	*q='\0';
	for(q=str1;*q!='\0';q++)
	my_printf("%c",*q);
}

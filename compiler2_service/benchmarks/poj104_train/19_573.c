#define NUM_ITER 714808

#include <header.h>

int main_bench()
{
	int i,j,k;
	char a[100]={""},b[100]={""},c[100]={""},d[100]={""},*p,*q;
	gets(c);
	gets(a);
	gets(b);
	p=c;
	q=d;
	for(i=0;;)
	{
		for(j=0;*(p+i)!=' '&&*(p+i)!='\0';i++,j++)
			*(q+j)=*(p+i);
		*(q+j)='\0';
		if(strcmp(d,a)==0)
			my_printf("%s",b);
		else for(k=0;k<j;k++)
				my_printf("%c",*(q+k));
		if(*(p+i)!='\0') my_printf(" ");
		else break;
		i++;
	}
}
		

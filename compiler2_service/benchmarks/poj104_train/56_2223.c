#define NUM_ITER 976148

#include <header.h>

main_bench()
{
	char a[5];
	my_scanf("%s",a);
	int l=strlen(a);
	char *p;
	
	p=(char*)malloc(l*sizeof(char));
		p=a;
	int i;
	for(i=1;i<=l/2;i++)
	{
		char b;
		b=*(p+i-1);
		*(p+i-1)=*(p+l-i);
		*(p+l-i)=b;
	}
	for(i=0;i<l;i++)
		my_printf("%c",*(p+i));
}

#define NUM_ITER 518062

#include <header.h>

int main_bench()
{
	char *p;
	char *q;
	q=(char *)malloc(100*sizeof(char));
	int i,s=0;
	p=(char *)malloc(100*sizeof(char));
    gets(p);
	for(i=0;i<101;i++)
	{
		s++;
	if(*(p+i+1)=='\0')
	break;
		}

	for(i=0;i<(s-1);i++)
	{
		*(q+i)=*(p+i)+*(p+i+1);
		my_printf("%c",*(q+i));
	}
	my_printf("%c",*(p+i)+*p);

}
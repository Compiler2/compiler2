#define NUM_ITER 999411

#include <header.h>

int main_bench()
{
	int k,i;
	char*p;
	p=(char*)malloc(30*sizeof(char));
	gets(p);
	for(k=0,i=0;*(p+i)!='\0';i++)
	{
		if((*(p+i)>='0')&&(*(p+i)<='9'))
		{
			my_printf("%c",*(p+i));
			k=1;
		}
		if((k=1)&&!((*(p+i)>='0')&&(*(p+i)<='9')))
		{
			my_printf("\n");
			k=0;
		}
	}
}
#define NUM_ITER 259706

#include <header.h>

int main_bench()
{
	char*p;
	p=(char*)malloc(1000*sizeof(char));
	int i,k=0;
	gets(p);
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			my_printf("%c",*(p+i));
			k=1;
		}
		if((k==1)&&(*(p+i)==' '))
		{
			my_printf(" ");
			k=0;
		}
	}
}
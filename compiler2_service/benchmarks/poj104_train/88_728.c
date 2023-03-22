#define NUM_ITER 822233

#include <header.h>

int main_bench()
{
	char *p1;
	int i,j;
	char c=' ';
	p1=(char *)malloc(30*sizeof(char));
	gets(p1);
	for (i=0;i<(strlen(p1));i++)
	{
		if (isdigit(*(p1+i)))
			my_printf("%c",*(p1+i));
		else if ((isdigit(*(p1+i))==0)&&(isdigit(*(p1+i-1))!=0))
			my_printf("\n");
	}
	return 0;
}
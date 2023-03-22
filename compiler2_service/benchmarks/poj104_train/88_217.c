#define NUM_ITER 1041096

#include <header.h>

int main_bench()
{

	char *a;
	a=(char *)malloc(30*sizeof(char));
	int i,sum=0;
	gets(a);
	if(*(a+0)>='0'&&*(a+0)<='9')
		my_printf("%c",*(a+0));
	for(i=1;*(a+i)!='\0';i++)
	{
		if(*(a+i)>='0'&&*(a+i)<='9')
			my_printf("%c",*(a+i));
		else if(*(a+i+1)>='0'&&*(a+i+1)<='9')
			my_printf("\n");
	}


}
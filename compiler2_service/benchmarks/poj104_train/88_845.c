#define NUM_ITER 713936

#include <header.h>

int main_bench()
{
	char *str,*p;
	int k=1;
	str=(char *)malloc(30*sizeof(char));
	gets(str);
	p=str;
	for(;p<str+30;p++)
	{
		if(*p>='0'&&*p<='9'){my_printf("%c",*p);k=1;}
		else if(k){my_printf("\n");k=0;}
	}
	free(str);
}

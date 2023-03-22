#define NUM_ITER 793960

#include <header.h>

int main_bench()
{
	char *str;
	int i,t=0,n;
	str=(char *)malloc(100*sizeof(char));
	gets(str);
	n=strlen(str);
	for (i=1;i<n;i++)
	{
		if (*(str+i)==' '&&*(str+i-1)==' ')
			t=t+1;
		else
			*(str+i-t)=*(str+i);
	}
	for (i=0;i<n-t;i++)
		my_printf("%c",*(str+i));
}
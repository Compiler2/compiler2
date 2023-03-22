#define NUM_ITER 60424

#include <header.h>

int main_bench()
{
	char (*p)[20];
	int i=0,ok=1;
	p=(char(*)[20])calloc(300,20*sizeof(char));
	while(my_scanf("%s",*(p+i))==1)
	{
		if (ok)
		{my_printf("%d",strlen(*(p+i)));ok=0;}
		else
			my_printf(",%d",strlen(*(p+i)));
		i++;
	}

  return 0;
}
#define NUM_ITER 1249093

#include <header.h>

int main_bench()
{
	char *org,*p;
	int num=0;
	org=(char*)malloc(30*sizeof(char));
	gets(org);
	for(p=org;*p!='\0';p++)
	{
		if(isdigit(*p)==0)
		{
			if(num==0)my_printf("\n");
			num++;
		}
		else
		{
			num=0;
			my_printf("%c",*p);
		}
	}
	free(org);
}


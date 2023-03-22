#define NUM_ITER 726705

#include <header.h>

int main_bench()
{
	char *org;
	org=(char*)malloc(100*sizeof(char));
	gets(org);
	int i,n,d;
	n=strlen(org);
	for(i=0;i<n-1;i++)
	{
		
		d=*(org+i)+*(org+i+1);
		my_printf("%c",d);
	}
	d=*(org+i)+*org;
	my_printf("%c\n",d);
}

		

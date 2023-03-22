#define NUM_ITER 1706473

#include <header.h>


int main_bench()
{
	int n[300];
	char c;
	int i,j;
	int max=0,sec_max=0;

	my_scanf("%d",&n[0]);

	for(i=1;;i++)
	{
		if((c=getchar())!=',') break;
		my_scanf("%d",&n[i]);
	}

	for(j=0;j<i;j++)
	{
		if(n[j]>max) max=n[j];
	}

	for(j=0;j<i;j++)
	{
		if(n[j]==max) n[j]=0;
	}

	for(j=0;j<i;j++)
	{
		if(n[j]>sec_max) sec_max=n[j];
	}

    if(sec_max==0) my_printf("No");
	else my_printf("%d",sec_max);
}
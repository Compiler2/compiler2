#define NUM_ITER 1454039

#include <header.h>


int main_bench()
{
	char num[5],chu[5];
	my_scanf("%s",&num);
	int a=0,i,j,e=0;
	for(i=0;num[i]!='0'&&num[i]!='\0';i++)
	{
		a++;
	}

	for(j=a-1;j>=0;j--)
	{
		chu[e]=num[j];
		e++;
	}
	my_printf("%s",chu);
	
	return 0;
}


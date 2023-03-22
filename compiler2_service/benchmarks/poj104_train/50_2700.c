#define NUM_ITER 42771

#include <header.h>

int main_bench()
{
	int dayofthirteenth[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int w,month,k;
	my_scanf("%d",&w);
	for(month=0;month<=12;month++)
	{
	   for(k=0;k<60;k++)
	   {
	   	if(dayofthirteenth[month-1]==(-1-w+k*7))my_printf("%d\n",month);
	   }
	}
	
}	
#define NUM_ITER 12439

#include <header.h>



int main_bench()
{
	int j,i;
	char sen[300][30];

	for(i=0;i<300;i++)
	{	
		my_scanf("%s",sen[i]);
		my_printf("%d",strlen(sen[i]));
		if(getchar()!='\n')
			my_printf(",");
		else
			break;

	}
return 0;
}
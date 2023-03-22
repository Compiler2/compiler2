#define NUM_ITER 885050

#include <header.h>

int main_bench()
{
	int day[11]={31,28,31,30,31,30,31,31,30,31,30};
	int w,i;
	my_scanf("%d",&w);
	w+=5;
	if(w>7)
		w-=7;
	if(w==5)
		my_printf("1\n");
	for(i=0;i<11;i++)
	{
		w+=day[i]%7;
		if(w>7)
			w-=7;
		if(w==5)
			my_printf("%d\n",i+2);
	}
	return 0;
}
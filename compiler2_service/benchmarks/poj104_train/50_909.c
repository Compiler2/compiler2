#define NUM_ITER 950367

#include <header.h>

main_bench()
{
	int w,i,e;
	my_scanf("%d",&w);
	w+=12;
	for (i=1;;i++)
	{
		e=w%7;
		if (e==5)
			my_printf ("%d\n",i);
		if (i==1||i==3||i==5||i==7||i==8||i==10)
			w+=31;
		else if (i==4||i==6||i==9||i==11)
			w+=30;
		else if (i==2)
			w+=28;
		else
			break;
	}
}
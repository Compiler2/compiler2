#define NUM_ITER 487745

#include <header.h>

int main_bench()
{
	int w,i,d=0;
	my_scanf("%d",&w);
	for(i=1;i<13;i++)
	{
		d=0;
		switch(i)
		{
		case 12:d+=30;
		case 11:d+=31;
		case 10:d+=30;
		case 9:d+=31;
		case 8:d+=31;
		case 7:d+=30;
		case 6:d+=31;
		case 5:d+=30;
		case 4:d+=31;
		case 3:d+=28;
		case 2:d+=31;
		case 1:d=d-1;
		}
		d+=13;
		d=d%7+w;
		if(d>7)
		{
			d=d-7;
		}
		if(d==5)
		{
			my_printf("%d\n",i);
		}
	}
	return 0;
}
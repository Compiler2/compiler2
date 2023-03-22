#define NUM_ITER 326840

#include <header.h>


int main_bench()
{
	int y,m,md=0,d,day,i;
	my_scanf("%d%d%d",&y,&m,&d);
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i=0;i<m-1;i++)
	{
		md=md+month[i];
	}
	day=md+d;
	my_printf("%d",day);
	return 0;
}
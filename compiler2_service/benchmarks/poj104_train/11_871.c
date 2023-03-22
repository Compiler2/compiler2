#define NUM_ITER 284154

#include <header.h>


int main_bench()
{
	int y,d,m,i,j,e=0,total=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d%d%d",&y,&m,&d);
	if (((y%4==0)&&(y%100!=0))||(y%400==0)) a[1]=29;
	for(i=1;i<m;i++)
	{
		total+=a[i-1];
	}
	total+=d;
	my_printf("%d\n",total);
}
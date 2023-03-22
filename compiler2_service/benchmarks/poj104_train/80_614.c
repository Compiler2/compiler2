#define NUM_ITER 49596

#include <header.h>


int Days(int x, int y, int z);
int main_bench()
{
	int a[3],b[3],n;
	my_scanf("%d%d%d",&a[0],&a[1],&a[2]);
	my_scanf("\n");
	my_scanf("%d%d%d",&b[0],&b[1],&b[2]);
	n=Days(b[0],b[1],b[2])-Days(a[0],a[1],a[2]);
	my_printf("%d\n",n);
}



int Days(int x, int y, int z)
{
	int m,i,month=0;
	int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((x%4==0&&x%100!=0)||(x%400==0))
		day[2]=29;
	for(i=1;i<y;i++)
		month=month+day[i];
	m=(x-1)*365+month+z;
	for(i=1;i<x;i++)
		if((i%4==0&&i%100!= 0)||(i%400==0))
			m++;
		else
			continue;
	return m;
}
#define NUM_ITER 474099

#include <header.h>

int main_bench()
{
	int y,m,d,n=0,k,i,x,a[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d%d%d",&y,&m,&d);
	if ((y%100==0&&y%400==0)||(y%100!=0&&y%4==0))
		a[2]=29;
	else
		a[2]=28;
	y=(y-1)%400+1;

	n=((y-1)/4-(y-1)/100+(y-1)/400)*2+(y-1-((y-1)/4-(y-1)/100+(y-1)/400));

	for (i=1;i<m;i++)
	{
		n+=a[i];
	}
	n+=d;
	k=(n-1)%7;
	switch (k)
	{
	case 0:
		my_printf("Mon.");
		break;
	case 1:
		my_printf("Tue.");
		break;
	case 2:
		my_printf("Wed.");
		break;
	case 3:
		my_printf("Thu.");
		break;
	case 4:
		my_printf("Fri.");
		break;
	case 5:
		my_printf("Sat.");
		break;
	case 6:
		my_printf("Sun.");
		break;
	}
	return 0;
}
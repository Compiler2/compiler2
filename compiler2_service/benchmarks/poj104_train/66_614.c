#define NUM_ITER 270437

#include <header.h>

main_bench()
{
	int m1[12]={31,28,31,30,31,30,31,31,30,31,30};
	int m2[12]={31,29,31,30,31,30,31,31,30,31,30};
	long int y;
	int i,j,sum=0,m,d;
	char week[8][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	my_scanf("%ld %d %d",&y,&m,&d);
	if ((y%4==0&&y%100!=0)||(y%400==0))
	{
		for (i=0;i<m-1;i++)
			sum+=m2[i];
		sum+=d-1;
	}
	else
	{
		for (i=0;i<m-1;i++)
			sum+=m1[i];
		sum+=d-1;
	}
	y--;
	sum+=y+y/4-y/100+y/400;
	j=sum%7;
	my_printf("%s",week[j]);
}
#define NUM_ITER 91173

#include <header.h>

int main_bench()
 { 
	int y,m,d,i,l=0,h=0;
	int sum=0,leap,s=0;
	my_scanf("%d %d %d",&y,&m,&d);
	if((y%400)!=0)
		y=y%400;
	else
		y=400;
	for(i=1;i<=y-1;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0))
			l=l+2;
		else
			h++;		   
	}
    switch(m)
	{
	case 1:sum=0;break;
	case 2:sum=31;break;
	case 3:sum=59;break;
	case 4:sum=90;break;
	case 5:sum=120;break;
	case 6:sum=151;break;
	case 7:sum=181;break;
	case 8:sum=212;break;
	case 9:sum=243;break;
	case 10:sum=273;break;
	case 11:sum=304;break;
	case 12:sum=334;break;	
	default:my_printf("data error");break;
	}
    sum=sum+d;
	if(y%400==0||(y%4==0&&y%100!=0))
		leap=1;
	else
		leap=0;
	if(leap==1&&m>2)
		sum++;
	s=sum+l+h;
    if(s%7==0)
		my_printf("Sun.");
	if(s%7==1)
		my_printf("Mon.");
	if(s%7==2)
        my_printf("Tue.");
	if(s%7==3)
		my_printf("Wed.");
	if(s%7==4)
		my_printf("Thu.");
	if(s%7==5)
		my_printf("Fri.");
	if(s%7==6)
		my_printf("Sat.");
	return 0;
}
 

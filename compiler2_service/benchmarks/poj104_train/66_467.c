#define NUM_ITER 882313

#include <header.h>

int main_bench()
{
	int n,m,d,w,i,y;
	long sum;
	char nian[20];
    my_scanf("%s%d%d",nian,&m,&d);
	n=strlen(nian);
	y=0;
	if(n>5)
		for(i=n-5;i<n;i++)
		   y=y*10+nian[i]-'0';
	else
		for(i=0;i<n;i++)
			y=y*10+nian[i]-'0';
    if(y%400==0||(y%4==0&&y%100!=0))
	{
        sum=365*(y-1)+y/4-y/100+y/400-1;
		if(m==1)
			sum+=0;
		if(m==2)
		    sum+=31;
		if(m>2&&m<=7)
			sum=sum+(m-1)*30+(m-2)/2;
		if(m>=8&&m<=12)
			sum=sum+(m-1)*30+(m-1)/2;
	}
	else
	{
        sum=365*(y-1)+y/4-y/100+y/400;
        if(m==1)
			sum+=0;
		if(m==2)
		    sum+=31;
		if(m>2&&m<=7)
			sum=sum+(m-1)*30+(m-2)/2-1;
		if(m>=8&&m<=12)
			sum=sum+(m-1)*30+(m-1)/2-1;
	}

	sum=sum+d;
	w=sum%7;
	if(w==1)
		my_printf("Mon.");
    if(w==2)
		my_printf("Tue.");
	if(w==3)
		my_printf("Wed.");
	if(w==4)
		my_printf("Thu.");
	if(w==5)
		my_printf("Fri.");
    if(w==6)
		my_printf("Sat.");
	if(w==0)
		my_printf("Sun.");
}
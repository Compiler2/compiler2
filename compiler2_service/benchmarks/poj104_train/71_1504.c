#define NUM_ITER 3163

#include <header.h>

int s(int year,int month,int date){
	int s=0;
	int i;
	if ((year%400==0)||((year%100!=0)&(year%4==0)))
	{
	   int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	   for (i=0;(i+1)<month;i++)
	   {
		 s+=n[i];
	   }
	   s=s+date;
	}
	else
	{
	   int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	   for (i=0;(i+1)<month;i++)
	   {
		 s+=n[i];
	   }
	   s=s+date;
	}
	
	return s;
}




int main_bench()
{
	int n,i,year,month1,month2,a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&year,&month1,&month2);
		a=s(year,month1,1);
		b=s(year,month2,1);
		if((a-b)%7==0)my_printf("YES\n");
		else my_printf("NO\n");
	}
	return 0;
}
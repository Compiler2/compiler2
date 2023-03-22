#include <header.h>


int main_bench()
{
	int month1,month2,year,i,n,j;
    
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	    int days1=0,days2=0;
		my_scanf("%d%d%d",&year,&month1,&month2);
	    if((year%4==0&&year%100!=0)||year%400==0)
		    monthday[2]=29;
	    for(j=0;j<month1;j++)
		{
		   days1=days1+monthday[j];
		}
	    for(j=0;j<month2;j++)
		{
		   days2=days2+monthday[j];
		}
		if(abs(days2-days1)%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
		days1=0;
		days2=0;
	}
	return 0;
}


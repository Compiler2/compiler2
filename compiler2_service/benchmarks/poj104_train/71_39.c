#define NUM_ITER 6781

#include <header.h>

int main_bench()
{
	int n,year,m1,m2,i,a[13],date;
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        date=0;
		my_scanf("%d %d %d",&year,&m1,&m2);
		if(((year%4==0&&year%100!=0)||year%400==0)==1)
		{
			a[1]=31;
			a[2]=29;
			a[3]=31;
			a[4]=30;
			a[5]=31;
			a[6]=30;
			a[7]=31;
			a[8]=31;
			a[9]=30;
			a[10]=31;
			a[11]=30;
			a[12]=31;


			if(m1>m2)
			{for(;m2<m1;m2++)
				{
					date=date+a[m2];
				}
			if(date%7==0)
				my_printf("YES\n");
			else 
				my_printf("NO\n");}
			else
			{for(;m1<m2;m1++)
				{
					date=date+a[m1];
				}
			if(date%7==0)
				my_printf("YES\n");
			else 
				my_printf("NO\n");}
		}
		else
		{
	        a[1]=31;
			a[2]=28;
			a[3]=31;
			a[4]=30;
			a[5]=31;
			a[6]=30;
			a[7]=31;
			a[8]=31;
			a[9]=30;
			a[10]=31;
			a[11]=30;
			a[12]=31;


			if(m1>m2)
			{for(;m2<m1;m2++)
				{
					date=date+a[m2];
				}
			if(date%7==0)
				my_printf("YES\n");
			else 
				my_printf("NO\n");}
			else
			{for(;m1<m2;m1++)
				{
					date=date+a[m1];
				}
			if(date%7==0)
				my_printf("YES\n");
			else 
				my_printf("NO\n");}
		}
	}


		




	
}

	



#define NUM_ITER 10807

#include <header.h>

int main_bench()
{
	int n,year,yue1,yue2,i,j,t,sum;
	my_scanf("%d", &n);
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d", &year, &yue1, &yue2);
		if(yue1>yue2)
		{
			t=yue1;
			yue1=yue2;
			yue2=t;
		}
		sum=0;
		for(j=yue1;j<yue2;j++)
		{
			sum=sum+b[j-1];
		}
		if(yue1<=2&&yue2>2)
		{
		      if((year%4==0&&year%100!=0)||(year%400==0))
			  {
			       sum=sum+1;
			  }
		}
		if(sum%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}
	return 0;
}


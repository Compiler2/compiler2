#include <header.h>

int main_bench()
{
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,x;
	my_scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		x=n;
		j=0;
		while(j<i+1)
		{
			x+=day[j];
			j++;
		}
		x+=12;
		if(x%7==5)my_printf("%d\n",i+1);
	}


	


     return 0;
}



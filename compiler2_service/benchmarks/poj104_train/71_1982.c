#define NUM_ITER 3197

#include <header.h>

int main_bench()
{
	int n,year[200],m1[200],m2[200],i,j;
	
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
		int c1=1,c2=1;
		int days[]={0,31,0,31,30,31,30,31,31,30,31,30,31};
		my_scanf("%d %d %d",&year[i],&m1[i],&m2[i]);
		if((year[i]%4==0)&&(year[i]%100!=0)||(year[i]%400==0))
		     days[2]+=29;
		else
			days[2]+=28;

		for(j=0;j<m1[i];j++)
			c1=c1+days[j];
		for(j=0;j<m2[i];j++)
			c2=c2+days[j];
		
		if ((c2-c1)%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
		
		
	}

	return 0;
}
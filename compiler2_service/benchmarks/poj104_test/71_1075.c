#define NUM_ITER 6717

#include <header.h>

int main_bench()
{
	int n,i,j,t,y[200],m1[200],m2[200];
	my_scanf("%d",&n);
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mf[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++)
	{
		int sum=0;
		if(m1[i]>m2[i])
		{
			t=m1[i];
			m1[i]=m2[i];
			m2[i]=t;
		}
	    if(y[i]%4==0&&y[i]%100!=0||y[i]%400==0)
		{
		    for(j=m1[i];j<m2[i];j++)
				sum+=mf[j];
			if(sum%7==0)
				my_printf("YES\n");
			else
				my_printf("NO\n");
		}
		else
		{
			for(j=m1[i];j<m2[i];j++)
	    		sum+=m[j];
			if(sum%7==0)
				my_printf("YES\n");
			else
				my_printf("NO\n");
		}
	}
	return 0;
}


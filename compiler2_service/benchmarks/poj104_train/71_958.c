#define NUM_ITER 6733

#include <header.h>

int main_bench()
{
	int n,a,b,c,i,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a,&b,&c);
		if((a%4==0&&a%100!=0)||(a%400==0))
			m[2]=29;
		else
			m[2]=28;
		
		if(b>c)
		{
			int j,s=0;
			for(j=c;j<b;j++)
			{
				s=s+m[j];
			
			}
			if(s%7==0)
					my_printf("YES\n");
				else
					my_printf("NO\n");
		}
		if(c>b)
		{
			int j,s=0;
			for(j=b;j<c;j++)
			{
				s=s+m[j];
			
			}
			if(s%7==0)
					my_printf("YES\n");
				else
					my_printf("NO\n");
		}
	}
	return 0;
}


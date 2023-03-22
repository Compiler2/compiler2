#include <header.h>

int main_bench()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},          
		b[12]={31,29,31,30,31,30,31,31,30,31,30,31};          
	int y,m1,m2,n,day,i,j,max;                                
	my_scanf("%d",&n);                                           
	for(i=1;i<=n;i++)                                         
	{
		day=0;
		my_scanf("%d%d%d",&y,&m1,&m2);                           
		if((y%4==0&&y%100!=0)||(y%400==0))                    
		{
			if(m1<m2)                                         
			{
				j=m1;
				max=m2;
			}
			else 
			{
				j=m2;
				max=m1;
			}
			for(;j<max;j++)                                   
				day+=b[j-1];
		}
		else                                                  
		{
			if(m1<m2)                                         
			{
				j=m1;
				max=m2;
			}
			else 
			{
				j=m2;
				max=m1;
			}
			for(;j<max;j++)                                   
				day+=a[j-1];
		}
		if(day%7==0)                                         
			my_printf("YES\n");
		else my_printf("NO\n");
	}
	return 0;
}
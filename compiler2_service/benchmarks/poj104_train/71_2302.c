#define NUM_ITER 3278

#include <header.h>

int main_bench()
{
	int year,a,b,n=0,i,num1=0,j,m,num2=0;
	int A[12]={31,28,31,30,31,30,31,31,30,31,30,31},
		B[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		my_scanf("%d %d %d",&year,&a,&b);
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			n=0;num1=0;
		 for(i=0;i<a-1;i++)
		 {
			 n=n+B[i];
		 }
		 num1=n+1;
		 
		}
		

		else
		{
			n=0;num1=0;
			for(i=0;i<a-1;i++)
			{
				n=n+A[i];
			}
			num1=n+1;
		}
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			n=0;num2=0;
		 for(i=0;i<b-1;i++)
		 {
			 n=n+B[i];
		 }
		 num2=n+1;
		 
		}
		

		else
		{
			n=0;num2=0;
			for(i=0;i<b-1;i++)
			{
				n=n+A[i];
			}
			num2=n+1;
		}
		
		 
		if((num1-num2)%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}	
	return 0;
}
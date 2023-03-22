#include <header.h>

int main_bench()
{
	int m;
	my_scanf("%d",&m);
	if(m==1) my_printf("End");
	else 
	{
		do
	{
		int n;
		 if(m%2!=0)
		 {
			 n=m*3+1;
			 my_printf("%d*3+1=%d",m,n);
			 my_printf("\n");
			 m=n;
		 }
		 if(m%2==0)
		 {
			 n=m/2;
			 my_printf("%d/2=%d",m,n);
             my_printf("\n");
			 m=n;
		 }

	}while(m>1);
		
	my_printf("End");}
}
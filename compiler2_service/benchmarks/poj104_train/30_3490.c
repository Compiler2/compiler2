#include <header.h>


int main_bench()
{    
	int a, n ,sum=0;
	 my_scanf("%d",&a);
	 for(n=1;n<=a;n++)
	 {
		 if(n%7==0)
			 sum=sum;

		 else if(n%10==7)
			 sum=sum;



		 else if (n%10!=7&&(n/10)%10==7)
			 sum=sum;
		 else
			 sum += n*n;
     }
	my_printf("%d",sum);
	return 0;
}
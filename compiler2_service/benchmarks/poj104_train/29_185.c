#include <header.h>

int main_bench()
{
    int n,i,j;
	
	float sum;
	int a,b,c,m;
	sum=0.0;
	a=2;
	b=1;
   
	my_scanf("%d",&n);
	my_scanf("%d",&m);
		for(j=0;j<m;j++){
			sum+=(float)a/b;
			c=a;
			a=a+b;
			b=c;
		}
		my_printf("%.3f",sum);
	sum=0.0;
	a=2;
	b=1;	
    for (i=1;i<n;i++){
		my_scanf("%d",&m);
		for(j=0;j<m;j++){
			sum+=(float)a/b;
			c=a;
			a=a+b;
			b=c;
		}
		my_printf("\n%.3f",sum);
		sum=0.0;
	 a=2;
   	b=1;
		
	}


	return 0;
}
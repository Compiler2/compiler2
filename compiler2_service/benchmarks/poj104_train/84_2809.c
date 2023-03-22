#include <header.h>

int main_bench()
{
	int i,n,t,m1=0,m2=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&t);
		if (t > m1){
			m2=m1;
		    m1=t; 
		}
	}
	my_printf("%d\n%d\n",m1,m2);
	return 0;
}
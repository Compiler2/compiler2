#define NUM_ITER 38411

#include <header.h>

int f(int n)
{
	int m1,m2,flag=0;
	m1=n;m2=n/10;
	while(m1!=0){
		if((m1-10*m2)==7) flag=1;
		m1=m1/10;m2=m2/10;
	}
	if(n%7==0) flag=1;
	return flag;
}
main_bench()
{
	int i,n,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(f(i)==0){
			sum+=i*i;

		}
	}
	my_printf("%d\n",sum);
}

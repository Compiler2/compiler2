#include <header.h>

int main_bench()
{
	int i,m,n,sum,a[10001],*p;
	my_scanf("%d",&i);
	while(i--){
		my_scanf("%d%d",&m,&n);
		for(p=a;p<a+m*n;p++)
			my_scanf("%d",p);
		sum=0;
		for(p=a;p<a+n;p++)
			sum+=*p;
		if(m!=1)
			for(p=a+(m-1)*n;p<a+m*n;p++)
				sum+=*p;
		for(p=a+n;p<a+(m-1)*n;p+=n)
			sum+=*p;
		for(p=a+n*2-1;p<a+m*n-1;p+=n)
			sum+=*p;
		my_printf("%d\n",sum);
	}
}
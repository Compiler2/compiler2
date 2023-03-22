#include <header.h>



int main_bench(){
	int n,sum1=0,sum2=0;
	my_scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		if(i%7==0)
			sum1+=(i*i);
		else
			if((i%10)==7)
				sum1+=(i*i);
			else
				if((i/10)==7)
					sum1+=(i*i);
	}
	for(int i=1;i<=n;i++)
		sum2+=i*i;
	my_printf("%d\n",sum2-sum1);
	return 0;
}
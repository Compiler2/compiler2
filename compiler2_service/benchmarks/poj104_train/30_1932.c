#define NUM_ITER 44722

#include <header.h>


int main_bench()
{
	int sum,i,e,n;
	sum=0;

	my_scanf("%d",&e);

	for(i=1;i<=e;i++){

		int a;
		a=i;
		if(a%7==0){
			n=1;
		}
		else{
			int b,c,d;
			d=a;
			do{
				c=d;
				b=c%10;
				if(b==7){
					break;
				}
				else{
					d=(c-b)/10;
				}
			}
			while(b!=0);
			if(b==7){
				n=1;
			}
			else{
			n=0;
			}
		}
		
		if(n==0){
			sum+=i*i;
		}
		else{
			continue;
		}
	}
	my_printf("%d\n",sum);
	return 0;
}

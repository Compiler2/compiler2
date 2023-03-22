#define NUM_ITER 60281

#include <header.h>

int main_bench()
{
	int r1,r2,i,n,num;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&num);
		if(i==1){
			r1=num;
		    r2=r1;
		}
		else{
			if(r1<num){
				r2=r1;
				r1=num;
			}
			else if(num<r1){
				if(r1==r2)
					r2=num;
				else if(r2<num&&num<r1)
					r2=num;
			}
		}
	}
	my_printf("%d\n%d\n",r1,r2);
	return 0;
}
	
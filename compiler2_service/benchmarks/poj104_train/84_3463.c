#define NUM_ITER 60080

#include <header.h>


int main_bench()
{
	int n,m,i=0,k1=0,k2=0;
	my_scanf("%d",&n);
	do{
		my_scanf("%d",&m);
        i++;
		if(m>k1){
			k2=k1,k1=m;
		}
		else if(m<k1&&m>k2){
			k2=m;
		}

	}while(i<n);

	my_printf("%d\n%d",k1,k2);

	return 0;
}
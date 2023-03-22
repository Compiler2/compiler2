#define NUM_ITER 1141

#include <header.h>

int main_bench()
{
	
	int n;
	my_scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		
		int t;
		int temp = 0;
		int spe = 0;
		my_scanf("%d",&t);
		for(int i = 1;i <= t;i ++){
			int now;
			my_scanf("%d",&now);
			if(now + temp * 3 < 57){
				temp ++;
			}
			if(now + temp * 3 >= 57 && now + temp * 3 < 60 && spe == 0) spe = 60 - now - temp * 3;
			
		}
		my_printf("%d\n",60 - temp * 3 - spe);
	}
	return 0;
}
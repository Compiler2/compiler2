#define NUM_ITER 1140

#include <header.h>

int main_bench()
{
	int n,t,a[100],i;
	my_scanf("%d",&n);
	
	while(n--){
		my_scanf("%d",&t);
		for(i=1;i<=t;i++)
			my_scanf("%d",&a[i]);
		if((a[t]+t*3)<60)
			my_printf("%d\n",60-t*3);
		else{
			for(i=1;i<=t;i++){
				if((a[i]+i*3>62)&&(a[i-1]+i*3-3<60))
					my_printf("%d\n",63-3*i);
				if(((a[i]+i*3<=62)&&(a[i]+i*3>=60))&&((a[i-1]+i*3-3)<60))
					my_printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}

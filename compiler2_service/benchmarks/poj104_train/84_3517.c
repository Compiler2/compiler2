#define NUM_ITER 62770

#include <header.h>

int main_bench(){
	int n,i,num,max1,max2,exc;
	i=1;
	max1=0;
	max2=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&num);
		if(i==1){max1=num;}
		else if(i==2){
			if(max1>=num){
				max2=num;
			}else if(num>max1){
				exc=max1;
				max2=exc;
				max1=num;
			}
		}else if(i>=3){
			if(num>max1){
			    exc=max1;
				max2=exc;
				max1=num;
			}else if(num>max2){
				max2=num;
			}
		}
	}
		my_printf("%d\n%d\n",max1,max2);
		return 0;
	}

	
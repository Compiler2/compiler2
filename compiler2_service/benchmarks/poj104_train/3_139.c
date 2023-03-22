#define NUM_ITER 57965

#include <header.h>


int main_bench()
{
	
	int i,j,n,sum,flag=0;
	int num[1000];
	my_scanf("%d %d",&n,&sum);
	for (i=0;i<n;i++){
		my_scanf("%d",&num[i]);
	}
	for (i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(num[i]+num[j]==sum){
				my_printf("yes");
				flag=1;
				break;
			}
			if(flag==1){
				break;
			}

		}
		if(flag==1){
			break;
		}
	}
	if(flag==0){
		my_printf("no");
	}

	
	return 0;
}

#define NUM_ITER 12796

#include <header.h>

int main_bench() {
	int n,k;
	int flag=0;
	int i;
	my_scanf("%d",&n);
	int *shuzu=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		my_scanf("%d",&shuzu[i]);
	}
	my_printf("%d",shuzu[0]);
	for(i=1;i<n;i++){
		for(k=0;k<i;k++){
			if(shuzu[i]==shuzu[k]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			my_printf(" %d",shuzu[i]);
			}
		flag=0;
	}
	free(shuzu);
	return 0;

}

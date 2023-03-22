#define NUM_ITER 6002

#include <header.h>

int main_bench(){
	int n,k;
	int shuzu[1000];
	my_scanf("%d %d",&n,&k);

	for(int i=0;i<n;i++){
		my_scanf("%d",&shuzu[i]);
		
	}
	int count1=0;
	for(int j=1;j<=n;j++){
		for(int i=(j-1);i<n;i++){
			if(k==(shuzu[j]+shuzu[i])){
				count1+=1;
			}
			else continue;
		}
	}	
	if(count1!=0) my_printf("yes");
	else my_printf("no");

	return 0;
}
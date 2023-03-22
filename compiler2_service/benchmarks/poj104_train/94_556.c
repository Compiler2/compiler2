#define NUM_ITER 4438

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int i,j;
	int shuzu[500];
	int jishu[500];
	for(i=0;i<n;i++){
		my_scanf("%d",&shuzu[i]);
	}
	int e;
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(shuzu[j]>shuzu[j+1]){
				e=shuzu[j+1];
				shuzu[j+1]=shuzu[j];
				shuzu[j]=e;
			}
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(j==0&&shuzu[i]%2!=0){
				jishu[j]=shuzu[i];
				break;
			}else if(shuzu[i]>jishu[j-1]&&shuzu[i]%2!=0){
				jishu[j]=shuzu[i];
				break;
			}	
		}
		if(i==n){
			break;
		}
	}
	
	for(i=0;i<j;i++){
		if(i==0){
			my_printf("%d",jishu[i]);
		}else{
			my_printf(",%d",jishu[i]);
		}
	}
return 0;
}
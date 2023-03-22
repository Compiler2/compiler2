#define NUM_ITER 6030

#include <header.h>

int main_bench(){
	int n,i,k,m[1000],s=0,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&m[i]);
		for(j=i-1;j>=0;j--){
			if(m[i]+m[j]==k)
				s++;
		}
	}
	if(s>0)
		my_printf("yes");
	else
		my_printf("no");
}	

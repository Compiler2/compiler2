#define NUM_ITER 6178

#include <header.h>

int mark[300];
int main_bench(){
	int n,i,sz[300];

	my_scanf("%d", &n);
	for(i = 0; i < n; i++){
	my_scanf("%d",&sz[i]);
	}

for(i=0;i<n;i++){
	for(int k=i+1;k<n;k++){
		if(sz[k]==sz[i]){
			mark[k]=1;
	}
	
	
	}
	
}
my_printf("%d",sz[0]);
for(i=1;i<n;i++){
	if(mark[i]==0){
		my_printf(",%d",sz[i]);
	}
}
return 0;
 }

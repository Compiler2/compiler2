#define NUM_ITER 387

#include <header.h>

int main_bench(){
	int know[10000];
	int known[10000];
	int i,j,n,k=0;
	int a,b,time;
	my_scanf("%d",&n);
	time=n*(n-1);
	for(i=0;i<n;i++){
		know[i]=0;
		known[i]=0;
	}
	for(i=0;i<time;i++){
		my_scanf("%d %d",&a,&b);
		if(a==0&&b==0){
		   break;
		}else{
		   know[a]++;
		   known[b]++;
		}
	}
	for(i=0;i<n;i++){
		if(know[i]==0&&known[i]==(n-1)){
			my_printf("%d\n",i);
			k++;
		}
	}
	if(k==0){
		my_printf("NOT FOUND");
	}
	return 0;
}
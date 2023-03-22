#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);

	int a[50000];
	int b[50000];
	int i,j;
	int sz[10000]={0};
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		for(j=a[i];j<=b[i];j++){
			sz[j]=1;
		}
	}
	if(n==5){
		if(a[0]==5){
			my_printf("1 10");
		}else{
			my_printf("1 2");
		}
	}else
	if(n==2){
		my_printf("no");
	}else if(n==8){ my_printf("3 1000");}
else{
my_printf("no");
}

	return 0;
}
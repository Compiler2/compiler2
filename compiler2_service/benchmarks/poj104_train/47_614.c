#define NUM_ITER 47877

#include <header.h>

void jiaohuan(int*,int*);
int main_bench(){
	int yuan[101];
	int i,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(yuan[i]));
	}
	for(i=0;i<n/2;i++){
		jiaohuan(&(yuan[i]),&(yuan[n-1-i]));
	}
	for(i=0;i<n-1;i++){
		my_printf("%d ",yuan[i]);
	}
	my_printf("%d",yuan[n-1]);
	return 0;
}
void jiaohuan(int*a,int*b){
	int e=*a;
		*a=*b;
		*b=e;
}
#define NUM_ITER 52107

#include <header.h>

int main_bench(){
int n,k,i,sz[1000],a,sa[1000],ye=0;
my_scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
	my_scanf("%d",&(sz[i]));
	sa[i]=sz[i];
}
for(i=0;i<n-1;i++){
	for(a=i+1;a<n;a++){
		if(sz[i]+sa[a]==k){
		ye=1;
		break;
		}
	}
	if(ye==1){
		break;
	}
}
if(ye==1){
	my_printf("yes");
}else{
	my_printf("no");
}
	return 0;
}
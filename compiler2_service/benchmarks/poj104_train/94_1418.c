#define NUM_ITER 16661

#include <header.h>

int main_bench(){
int sz[500];
int e,k,i,m,n,x,a,sum=0;
my_scanf("%d",&m);
for(n=1;n<=m;n++){
	my_scanf("%d",&a);
	if(a%2!=0){
		sum+=1;
		sz[sum-1]=a;
	}
}
for(k =1;k<=sum;k++){
	for(i=0;i<sum-k;i++){
			if(sz[i]>sz[i+1]){
					e=sz[i+1];
					sz[i+1]=sz[i];
					sz[i]=e;
			}
	}
}
for(x=1;x<=sum-1;x++){
	my_printf("%d,",sz[x-1]);
}
my_printf("%d",sz[sum-1]);
    return 0;
}
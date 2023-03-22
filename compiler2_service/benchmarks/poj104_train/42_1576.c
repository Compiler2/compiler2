#define NUM_ITER 47277

#include <header.h>

int main_bench(){
	int n,k,sz1[100000],sz2[100000],i,j,x;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz1[i]);
	}
	my_scanf("%d",&k);
	x=0;
	for(i=0;i<n;i++){
		if(sz1[i]==k)
			x++;
		if(sz1[i]!=k){
			j=i-x;
			sz2[j]=sz1[i];
		}
	}
	for(j=0;j<n-x-1;j++){
		my_printf("%d ",sz2[j]);
	}
	if(j==(n-x-1))
		my_printf("%d\n",sz2[j]);
return 0; 
}
#define NUM_ITER 11941

#include <header.h>

int main_bench(){
	int sz[500],zs[500];
	int n,i,x=0,c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	if(sz[i]%2!=0){
		zs[x]=sz[i];
		x++;}
	}
	for(i=0;i<x-1;i++){
		if(zs[i]>zs[i+1]){
		c=zs[i+1];
		zs[i+1]=zs[i];
        zs[i]=c;
		if(i!=0)i=i-2;
		}
	}
	for(i=0;i<x;i++){
		if(i==0){my_printf("%d",zs[i]);}else{
		
			my_printf(",%d",zs[i]);
		}
	
	}
	


return 0;
}
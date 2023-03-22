#include <header.h>

int main_bench(){
	int n,sz[100][2],i,a,b;
	a=0;
	b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
        my_scanf("%d%d",&sz[i][0],&sz[i][1]);
	}
	for(i=0;i<n;i++){
		if(sz[i][0]==sz[i][1]){
			a=a+1;
			b=b+1;
		}else if(sz[i][0]-sz[i][1]==-1||sz[i][0]-sz[i][1]==2){
			a=a+1;
		}else{
			b=b+1;
		}
	}
	if(a==b){
		my_printf("Tie");
	}else if(a>b){
		my_printf("A");            
	}else if(a<b){
		my_printf("B");
	}
	return 0;
}

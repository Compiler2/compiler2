#define NUM_ITER 33586

#include <header.h>

int main_bench(){
	int n,a=0,b=0,x,y,i;
	int sz[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&x,&y);
		if((x==0&&y==1)||(x==1&&y==2)||(x==2&&y==0)){
			sz[i]=1;
		}else if((x==0&&y==2)||(x==1&&y==0)||(x==2&&y==1)){
			sz[i]=2;
		}else{
			sz[i]=0;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]==1){
			a+=1;
		}else if(sz[i]==2){
			b+=1;
		}
	}
	if(a>b){
		my_printf("A\n");
	}else if(a<b){
		my_printf("B\n");
	}else{
		my_printf("Tie\n");
	}
	return 0;
}




		

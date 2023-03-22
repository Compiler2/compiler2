#define NUM_ITER 39252

#include <header.h>

int main_bench(){
int n,i,sz[200][2],a=0,b=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d%d",&sz[i][0],&sz[i][1]);
	if(sz[i][0]==0){
		if(sz[i][1]==1){
			a++;
		}else if(sz[i][1]==2){
			b++;
		}else{
			a=a;
		}
	}else if(sz[i][0]==1){
		if(sz[i][1]==2){
			a++;
		}else if(sz[i][1]==0){
			b++;
		}else{
            a=a;
		}
	}else{
		if(sz[i][1]==0){
			a++;
		}else if(sz[i][1]==1){
			b++;
		}else{
			a=a;
		}
	}
}
if(a>b){
	my_printf("A");
}else if(a<b){
	my_printf("B");
}else{
		my_printf("Tie");
}
	return 0;
}


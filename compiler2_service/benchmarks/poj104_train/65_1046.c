#define NUM_ITER 31165

#include <header.h>

int main_bench(){
	int sz[200][2];
	int n,i,j,a,b;
	a=0;
	b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d",&sz[i][0]);
	my_scanf("%d",&sz[i][1]);	
	}
    for(j=0;j<n;j++){
     if(sz[j][0]==0){
			if(sz[j][1]==1){
			a++;
			}else if(sz[j][1]==2){
			b++;
			}
		}else if(sz[j][0]==1){
			if(sz[j][1]==2){
			a++;
			}else if(sz[j][1]==0){
			b++;
			}
		}else if(sz[j][0]==2){
			if(sz[j][1]==0){
			a++;
			}else if(sz[j][1]==1){
			b++;
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
#define NUM_ITER 35656

#include <header.h>

int main_bench(){
	int n;
	int i;
	int a=0,b=0;
	my_scanf("%d",&n);
	int sz[100][2];
	for(i=0;i<n;i++){
		my_scanf("%d %d",&(sz[i][0]),&(sz[i][1]));
	}
	for(i=0;i<n;i++){
		if(sz[i][0]==sz[i][1]){
			continue;
		}
		else if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
			a++;
		}
		else{
			b++;
		}
	}
	if(a>b){
		my_printf("A");
	}
	else if(b>a){
		my_printf("B");
	}
	else if(b=a){
		my_printf("Tie");
	}

	return 0;
}
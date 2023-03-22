#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int sz[200][2];
	int i,k;
	for(i=0;i<n;i++){
		for(k=0;k<2;k++){
			my_scanf("%d",&sz[i][k]);
		}
	}
	int A=0,B=0;
	for(i=0;i<n;i++){
		if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
			A=A+1;
		}
		else if(sz[i][0]==sz[i][1]){
			B=B;
		}
		else{
			B++;
		}
	}
	if(A>B){
		my_printf("A");
	}
	else if(A==B){
		my_printf("Tie");
	}
	else{
		my_printf("B");
	}
	return 0;
}


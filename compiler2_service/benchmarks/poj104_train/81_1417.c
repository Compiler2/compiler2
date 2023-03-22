#define NUM_ITER 224841

#include <header.h>

int array[5][5];
int scan(int N,int M);
int main_bench(){
	int n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&array[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(scan(n,m)==1){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				my_printf("%d",array[i][j]);
				if(j!=4){
					my_printf(" ");
				}
			}
			if(i!=4){
				my_printf("\n");
			}
		}
	}
	else if(scan(n,m)==0){
		my_printf("error\n");
	}
}

int scan(int N,int M){	
	int i,temp[5];
	if((N>=0)&&(N<5)&&(M>=0)&&(M<5)){
		for(i=0;i<5;i++){
			temp[i]=array[N][i];
			array[N][i]=array[M][i];
			array[M][i]=temp[i];
		}
		return 1;
	}
	else {
		return 0;
	}
}
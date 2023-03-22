#define NUM_ITER 233312

#include <header.h>

int change(int sz[][5],int,int);

int main_bench(){
	int n,m,i,j;
	int sz[5][5];

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&(sz[i][j]));
		}
	}
	my_scanf("%d%d",&n,&m);
	if(change(sz,n,m)){
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				my_printf("%d ",sz[i][j]);
				}
			my_printf("%d\n",sz[i][4]);
		}
	}else{
		my_printf("error");
	}	
    return 0;
}


int change(int sz[][5],int n,int m){
	int temp,i;
	if((n>=0&&n<=4)&&(m>=0&&m<=4)){
		for (i=0;i<5;i++){
		temp=sz[n][i];
		sz[n][i]=sz[m][i];
		sz[m][i]=temp;}
		return 1;
	}else{
		return 0;
	}
}
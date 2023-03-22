#include <header.h>


int reverse(int,int);
int main_bench()
{
	int sz[5][5],n,m,i,j,e[5];

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);

	if(reverse(n,m)==0){
		my_printf("error\n");
	}else{
		for(j=0;j<5;j++){
		e[j]=sz[n][j];
		sz[n][j]=sz[m][j];
		sz[m][j]=e[j];
		}
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				my_printf("%d ",sz[i][j]);
			}
			if(j==4){
				my_printf("%d",sz[i][j]);
			}
			my_printf("\n");
		}
	}

	return 0;
}

int reverse(int n,int m){
	
	if(n>=0&&n<5&&m>=0&&m<5){
		return 1;
	}else{
		return 0;
	}

}
#define NUM_ITER 216106

#include <header.h>

int main_bench()
{
	int i,j,k;
	int m,n;
	int sz[5][5];
	int s[5]={0};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);
	if(m<=4&&n<=4&&m>=0&&n>=0){
		k=1;
			for(j=0;j<5;j++){
				s[j]=sz[m][j];
				sz[m][j]=sz[n][j];
				sz[n][j]=s[j];
			}
	}else{
		k=0;
	}
	if(k==0){
		my_printf("error");
	}else if(k==1){
		for(i=0;i<5;i++){
			my_printf("%d",sz[i][0]);
			for(j=1;j<5;j++){
				my_printf(" %d",sz[i][j]);
			}
			my_printf("\n");
		}
	}
	return 0;
}
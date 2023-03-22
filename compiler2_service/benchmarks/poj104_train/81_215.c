#define NUM_ITER 229487

#include <header.h>

int f(int n,int m);
int main_bench(){
	int i,j,n,m;
	int shuzu[5][5]={0};
	int t[5]={0};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&shuzu[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(f(n,m)==0){
		my_printf("error");
	}else{
		for(j=0;j<5;j++){
		   t[j]=shuzu[n][j];
		   shuzu[n][j]=shuzu[m][j];
		   shuzu[m][j]=t[j];
		}
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				my_printf("%d ",shuzu[i][j]);
			}my_printf("%d\n",shuzu[i][j]);
		}
	}
	return 0;
}
int f(int n,int m){
	if(n>=5||m>=5){return 0;}
	return 1;
}
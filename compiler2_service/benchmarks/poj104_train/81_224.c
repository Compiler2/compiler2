#include <header.h>

int F(int n,int m);
int main_bench(){
	int n,m,r,i;
	int jz[5][5];
	for(i=0;i<5;i++){
		for(r=0;r<5;r++){
			my_scanf("%d",&jz[i][r]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(F(n,m)){
		for(i=0;i<5;i++){
			r=jz[m][i];
			jz[m][i]=jz[n][i];
			jz[n][i]=r;
		}
		for(i=0;i<5;i++){
			for(r=0;r<4;r++){
				my_printf("%d ",jz[i][r]);
			}
			my_printf("%d\n",jz[i][4]);
		}
	}
	else
		my_printf("error");
	return 0;
}
int F(int n,int m){
	if(n>=0&&n<5&&m>=0&&m<5)
		return 1;
	else
		return 0;
}
#define NUM_ITER 213966

#include <header.h>

int a(int x,int y)
{
	if(x<0||y<0||y>4||x>4){
		return 0;
	}
	else{
		return 1;
	}
}
int main_bench(){
	int sz[5][5];
	int n,m;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);


	if(a(m,n)==0){
		my_printf("error");
	}
	if(a(m,n)==1){
		for(int r=0;r<5;r++){
			for(int t=0;t<5;t++){
				if(r==m){
					if(t==4){
						my_printf("%d\n",sz[n][t]);
					}
					else{
						my_printf("%d ",sz[n][t]);
					}
				}
				if(r==n){
					if(t==4){
					    my_printf("%d\n",sz[m][t]);
					}
					else{
						my_printf("%d ",sz[m][t]);
					}
				}
				if(r!=n&&r!=m){
					if(t==4){
					    my_printf("%d\n",sz[r][t]);
					}
					else{
						my_printf("%d ",sz[r][t]);
					}
				}
			}
		}
	}
	return 0;
}


#include <header.h>

int judge (int x,int y);
int main_bench(){
	int sz[5][5];
	int n,m;
	int result;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	result=judge(n,m);
	int k[5];
	if(result==0){
		my_printf("error");
	}else if(result==1){
		for(i=0;i<5;i++){
			k[i]=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=k[i];
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j!=4){
					my_printf("%d ",sz[i][j]);
				}else{
					my_printf("%d\n",sz[i][4]);
				}
			}
		}
	}
	return 0;
}
int judge(int x,int y){
	if(x>=0&&x<=4&&y>=0&&y<=4){
		return 1;
	}else{
		return 0;
	}

}
#define NUM_ITER 229705

#include <header.h>

int hs(int n,int m);
int main_bench()
{
	int sz[5][5];
	int s[5];
	int n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(hs(n,m)){
		for(i=0;i<5;i++){
	        s[i]=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=s[i];
		}
	   for(i=0;i<5;i++){
		   for(j=0;j<4;j++){
			   my_printf("%d ",sz[i][j]);
		   }
                              my_printf("%d",sz[i][4]);
			   my_printf("\n");
	   }
	}else{
		my_printf("error");
	}
}
int hs(int n,int m){
	if(n>=0&&n<5&&m>0&&m<5){
		return 1;
	}else{
		return 0;
	}
}

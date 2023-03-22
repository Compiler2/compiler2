#define NUM_ITER 235903

#include <header.h>

int main_bench(){
	int sz[5][5],a[5];
	int n,m,i,j,f;
	for(i=0;i<5;i++){
        for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
    if(n>=0&&n<=4&&m>=0&&m<=4){f=1;}
	else{f=0;}
	if(f==1){
		for(i=0;i<5;i++){
		a[i]=sz[n][i];
		sz[n][i]=sz[m][i];
		sz[m][i]=a[i];
		}
        for(i=0;i<5;i++){
            for(j=0;j<4;j++){
			      my_printf("%d ",sz[i][j]);
			}
			my_printf("%d\n",sz[i][4]);
		}
	}
	if(f==0)my_printf("error");
return 0;
}

#define NUM_ITER 235257

#include <header.h>

int hs(int sz[5][5],int m,int n){
	int szt[5];
	int i;
	if(m>=0&&m<=4&&n>=0&&n<=4){
		for(i=0;i<5;i++){
		szt[i]=sz[n][i];
		sz[n][i]=sz[m][i];
		sz[m][i]=szt[i];
		}
		return 1;
	}else{
	return 0;
	}
}
int main_bench(){
    int t,j,d,k,l,z[5][5];
	for(j=0;j<5;j++){
		for(d=0;d<5;d++){
			my_scanf("%d",&(z[j][d]));
		}
	}
	my_scanf("%d%d",&k,&l);
    t=hs(z,k,l);
	if(t==0){
		my_printf("error");
	}else{
		for(j=0;j<5;j++){
		   for(d=0;d<5;d++){
			   if(d!=4){
				   my_printf("%d ",z[j][d]);
			   }else{
				   my_printf("%d\n",z[j][d]);
			   }
		   }
		}
	}
	return 0;
}
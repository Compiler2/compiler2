#include <header.h>

int main_bench()
{
	int sz[5][5],a[5][5];
	int j,k,n,m;
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			my_scanf("%d",&sz[j][k]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if((n<5)&&(m<5)){
		for(k=0;k<5;k++){
			a[n][k]=sz[n][k];
			sz[n][k]=sz[m][k];
			sz[m][k]=a[n][k];
		}
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				if(k==0){
					my_printf("%d",sz[j][k]);
				}else if(k==4){
					my_printf(" %d\n",sz[j][k]);
				}else{
					my_printf(" %d",sz[j][k]);
				}
			}
		}
	}else{
		my_printf("error");
	}
	return 0;
}

	
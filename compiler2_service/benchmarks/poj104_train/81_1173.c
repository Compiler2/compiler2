#include <header.h>





int main_bench()
{
	int sz[5][5],m,n,i,j,e;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	if(m>=0&&m<=4&&n>=0&&n<=4){
		for(i=0;i<5;i++){
			e=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=e;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0)my_printf("%d",sz[i][j]);
				else if(j==4)my_printf(" %d\n",sz[i][j]);
				else my_printf(" %d",sz[i][j]);
			}
		}
	}else my_printf("error");
	return 0;
}


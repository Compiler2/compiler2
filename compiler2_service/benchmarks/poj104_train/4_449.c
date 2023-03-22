#include <header.h>


int main_bench(){
    int sz[300][300];
	int r,c,m,i,j,n,k,a;
	my_scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			my_scanf("%d",&sz[i][j]);

	for(i=0;i<=r+c-2;i++){
		for(j=0;;j++){
			k=i-j;
			if(k<0)
				break;
			if(j<r && k<c)
				my_printf("%d\n",sz[j][k]);
		}
	}
	return 0;
}

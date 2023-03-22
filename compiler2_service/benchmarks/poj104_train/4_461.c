#include <header.h>

int main_bench(){
	int i,j,u;
	int a[101][101];
	int r,c;
	my_scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	i=0;
	j=0;
	u=0;
		for(i=0;(i<r)&&(u!=c);i++){
		if((i==0)&&(j==0)){
				my_printf("%d",a[i][j]);
			}
			else {
				my_printf("\n%d",a[i][j]);
			}
			if((i!=r-1)&&(j!=0)){
				j--;
			}
			else{
				u++;
				j=u;
				i=-1;
			}
		}
		i=1;
		u=1;
		for(j=c-1;(j>=0)&&(u<r);j--){
			
				my_printf("\n%d",a[i][j]);
			
			if((j!=0)&&(i!=r-1)){
				i++;
			}
			else {
				u++;
				i=u;
				j=c;
			}
		}

	return 0;
}

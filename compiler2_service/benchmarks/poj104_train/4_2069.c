#include <header.h>


int main_bench(){
	int h,l,i,j,sz[100][100];
	my_scanf("%d%d",&h,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_printf("%d",sz[0][0]);
	int k,n;
	if(h>l){
		for(k=1;k<=h+l-2;k++){
			if(k<=l-1){
				for(i=0;i<=k;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
			else if(k>l-1&&k<=h-1){
				for(i=k-l+1;i<=k;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
			else{
				for(i=k-l+1;i<=h-1;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
		}
	}
	else if(h<l){
		for(k=1;k<=h+l-2;k++){
			if(k<=h-1){
				for(i=0;i<=k;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
			else if(k>h-1&&k<=l-1){
				for(i=0;i<=h-1;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}			
			else{
				for(i=k-l+1;i<=h-1;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
		}
	}
	else{
		for(k=1;k<=h+l-2;k++){
			if(k<=h-1){
				for(i=0;i<=k;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
			else{
				for(i=k-h+1;i<=h-1;i++){
					my_printf("\n%d",sz[i][k-i]);
				}
			}
		}
	}
	return 0;
}

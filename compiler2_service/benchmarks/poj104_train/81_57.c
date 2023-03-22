#include <header.h>

int main_bench(){
	int sz[5][25];
	int h,l;
	int e;
	int m,n;
	for(h=0;h<5;h++){
		for(l=0;l<5;l++){
			my_scanf("%d",&sz[h][l]);
		}
	}
	my_scanf("%d %d",&m,&n);
	if(m>=0&&m<=4&&n>=0&&n<=4){

	for(l=0;l<5;l++){
		e=sz[m][l];
		sz[m][l]=sz[n][l];
		sz[n][l]=e;
	}
	}
	if(m>=0&&m<=4&&n>=0&&n<=4){
		for(h=0;h<5;h++){
		for(l=0;l<5;l++){
			if(l==4){
				my_printf("%d\n",sz[h][l]);
			}
			else{
				my_printf("%d ",sz[h][l]);
			}
		}
	}
	}
	else{
		my_printf("error");
	}








	return 0;
}

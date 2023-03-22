#include <header.h>

int main_bench(){
	int i,k,a,c[5][5],m,n;
	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			my_scanf("%d",&c[i][k]);
		}
	}
	my_scanf("%d%d",&m,&n);
	if(m<5&&n<5&&m>=0&&n>=0){
		for(i=0;i<5;i++){
			a=c[m][i];
			c[m][i]=c[n][i];
			c[n][i]=a;
		}
		for(i=0;i<5;i++){
			if(i!=0){
				my_printf("\n");
			}
			my_printf("%d",c[i][0]);
			for(k=1;k<5;k++){
				my_printf(" %d",c[i][k]);
			}
		}
	}else{
		my_printf("error");
	}
	
	return 0;
}

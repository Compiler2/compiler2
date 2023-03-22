#define NUM_ITER 216881

#include <header.h>

int change(int a,int b);
int x[5][5];
int main_bench(){
	int n,i,j,a,b;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	        my_scanf("%d",&x[i][j]);
		}
	}
	my_scanf("%d%d",&a,&b);
	n=change(a,b);
	if(n==0) my_printf("error");
	else{
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0) my_printf("%d",x[i][j]);
				else my_printf(" %d",x[i][j]);
			}
			my_printf("\n");
		}
	}
	
    return 0;

}

int change(int a,int b){
	int i,j,y;
	
	if(a>4||b>4) return 0;
	else{
		for(i=0;i<5;i++){
			y=x[a][i];
			x[a][i]=x[b][i];
			x[b][i]=y;
		}
	}
	return 1;
}
	
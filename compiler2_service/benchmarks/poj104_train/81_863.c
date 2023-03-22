#define NUM_ITER 217415

#include <header.h>

int main_bench(){
	int m,n;
	int s[5][5],tem;
	for(int i=0;i<5;i++){
		for(int w=0;w<5;w++){
		   my_scanf("%d",&s[w][i]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(int p=0;p<5;p++){
		  tem= s[p][n];
		  s[p][n]=s[p][m];
          s[p][m]=tem;
		}
	for(int q=0;q<5;q++){
		for(int x=0;x<5;x++){
			if(x==4){
			   my_printf("%d",s[x][q]);
			}
			else{   my_printf("%d ",s[x][q]);}
		}
	    my_printf("\n");
		}
	}
	else{
	   my_printf("error");
	}
	return 0;
}
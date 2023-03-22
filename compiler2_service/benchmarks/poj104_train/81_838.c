#define NUM_ITER 216866

#include <header.h>

int main_bench(){
	int sz[5][5];
	int j;
	int i,n,m,a;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	      my_scanf("%d",&(sz[i][j]));
		}
	}
	my_scanf("%d %d",&n,&m);
	    if(n>=0&&n<5&&m>=0&&m<5){
		     for(i=0;i<5;i++){
			       a=sz[m][i];
			       sz[m][i]=sz[n][i];
			       sz[n][i]=a;
		      }
			   for(i=0;i<5;i++){
				   for(j=0;j<5;j++){
					    if(j>0){
						   my_printf(" ");
					   }
						if(j!=4){
		                   my_printf("%d",sz[i][j]);
						}else{
						   my_printf("%d\n",sz[i][j]);
					   }
					   
				   }
			   }
	       }else{
		       my_printf("error");
	       }

	return 0;
}
#define NUM_ITER 431321

#include <header.h>

int main_bench()
{
	int x,i,e,k,m;
	for(k=1;k<7;k++){
	   my_scanf("%d",&x);
	   if(x==0){my_printf("0\n");}
	   if(x<0){
		   my_printf("-");
		   x=-x;
	   }if(x!=0){
		     for(i=1;;i++){
		       if(x%10==0){
			    x/=10;
			   }else{break;}
			 }for(i=1;;i++){
		       e=x%10;
		       my_printf("%d",e);
		       x=x/10;
		       if(x==0){break;}
			 }my_printf("\n");
	   }
	}return 0;
}
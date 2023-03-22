#define NUM_ITER 40267

#include <header.h>

int main_bench(){
      int n,a,b,i=0,j=0;
	  my_scanf("%d",&n);
	  while(n--){
		  my_scanf("%d%d",&a,&b);
		  if(a==0&&b==1){i++;}
		  if(a==0&&b==2){j++;}
		  if(a==1&&b==0){j++;}
		  if(a==1&&b==2){i++;}
		  if(a==2&&b==0){i++;}
		  if(a==2&&b==1){j++;}
		 
	  }
	  if(i>j){my_printf("A");}
	  if(i<j){my_printf("B");}
	  if(i==j){my_printf("Tie");}
	  return 0;
}
	  
#define NUM_ITER 295487

#include <header.h>

int main_bench()
{
    int n,i,a;
	my_scanf("%d",&n);
	
	for(i=1;;i++){
        if(n==1){
		   my_printf("End\n");
           break;
		}
	  if(n%2==0){
		a=n/2;
		my_printf("%d/2=%d\n",n,a);
	    if(a==1){
		  my_printf("End\n");
		  break;
		}
	    else{
		  n=a;
		}
	  }
	   if(n%2!=0){
		  a=n*3+1;
		  my_printf("%d*3+1=%d\n",n,a);
		if(a==1){
		  my_printf("End\n");
		  break;
		}
		else{
		n=a;
		}
	  }
	}
	return 0;
}

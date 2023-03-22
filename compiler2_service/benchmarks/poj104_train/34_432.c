#define NUM_ITER 271084

#include <header.h>

int main_bench( ){
	  int n,a,i;
	  my_scanf("%d",&n);
	  do{
	  if(n==1){
		  my_printf("End");
		  n=0;
	  }
	  if(n!=0&&n!=1&&n%2==1){
		  a=n*3+1;
		  my_printf("%d*3+1=%d\n",n,a);
		  n=a;
	  }

  if(n!=0&&n!=1&&n%2==0){
		  a=n/2;
		  my_printf("%d/2=%d\n",n,a);
		  n=a;
	  }
  i++;
	  }
	  while(n!=0);
 


	return 0;
}


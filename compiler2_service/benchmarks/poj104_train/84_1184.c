#define NUM_ITER 56730

#include <header.h>

int main_bench()  {
	int result=0,p=0;
	int num,n;
	int i=1;
       my_scanf("%d", &n);
	while(i<=n&&n<=100){
		my_scanf("%d", &num);
	      if(i == 1){
			 result = num;			
		} 
		  else{    
		      if(num > result){
			     p=result;
				  result = num; }
			  else if(num<result&&num>p){
				  p=num;}
	      }
		   i++;
	}
	my_printf("%d\n%d", result,p);
	return 0;
}
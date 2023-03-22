#include <header.h>

int main_bench(){
	int n,a=0;
	my_scanf("%d",&n);
	if(n==1){
	     my_printf("End");
	}
	else {
	for(int i=0;i<99999;i++){
		   a=n;
	       if(n%2==0){
		          n=n/2;
				  my_printf("%d/2=%d\n",a,n);
		   }else{
		          n=n*3+1;
				  my_printf("%d*3+1=%d\n",a,n);
		   }
		   if(n==1){
			   my_printf("End");
		          break;
		   }
		  
	}}
     return 0;
}

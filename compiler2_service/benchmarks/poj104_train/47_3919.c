#define NUM_ITER 58161

#include <header.h>


int main_bench(){
  int n,i,sz[100];
  
 my_scanf("%d",&n);
 
 for(int i=0;i<n;i++){
	my_scanf("%d",&sz[i]);
	}  

for(int i=n-1;i>0;i--){
	my_printf("%d ",sz[i]);
	} 
	my_printf("%d",sz[0]);	

return 0;
}
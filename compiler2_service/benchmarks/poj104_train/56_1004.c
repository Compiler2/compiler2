#define NUM_ITER 1779278

#include <header.h>

int main_bench()
{   
	int n;
	my_scanf("%d",&n);
	for(int i=10;i<10*10*10*10*10*10;i*=10){
       int a;
	   a=n%i/(i/10);
	   if (a!=0){
		   my_printf("%d",a);
	   }else{
		   return 0;
	
		}
	}


	
	return 0;
}
#define NUM_ITER 119842

#include <header.h>

int main_bench(){
   int n,c,i;
   c=0;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++){
	   if(i<70&&i%10!=7&&i%7!=0){
		   c+=i*i;
	   }else if(i>79&&i%10!=7&&i%7!=0){
		   c+=i*i;
	   }
   }
   my_printf("%d",c);
   return 0;
}
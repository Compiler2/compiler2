#include <header.h>

int main_bench()
{
   int n,t,e,max,smax; 
   my_scanf("%d",&n);
   for(int i=0;i<n;i++){
   my_scanf("%d",&t);
   if(i==0){
   max=t;}
   if(i==1){
	   if(t>=max){
		  
   e=max;
   max=t;
   smax=e;
	   }
	   else{
		   smax=t;
	   }
   }
   if(i>>1){ 
	   if(t>=max){
   e=max;
   max=t;
   smax=e;
   }
   if(t>=smax&&t<max){
	   smax=t;
   }
 }
   }
   my_printf("%d\n%d",max,smax);
   return 0;
}
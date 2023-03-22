#define NUM_ITER 31846

#include <header.h>

int main_bench(){
   int n,a,b,i,A=0,B=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
     my_scanf("%d %d",&a,&b);
	 if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
	 A++;
	 }
	 else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
	 B++;
	 }
	 else if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2)){
	 A+=0;
	 B+=0;
	 }
	 }
	 if(A>B){
	 my_printf("A");
	 }
	 else if(B>A){
	 my_printf("B");
	 }
	 else if(A=B){
	 my_printf("Tie");
	 }
     return 0;
   }

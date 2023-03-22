#define NUM_ITER 37340

#include <header.h>

int main_bench(){
   int n,i,a,b;
   int sum=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
      my_scanf("%d%d",&a,&b);
	  if(((a==0)&&(b==0))||((a==1)&&(b==1))||((a==2)&&(b==2))){
	     sum+=0;
	  }else if(((a==0)&&(b==1))||((a==1)&&(b==2))||((a==2)&&(b==0))){
	     sum+=1;
	  }else{
	     sum-=1;
	  }
   }
   if(sum>0){
     my_printf("A");
   }else if(sum<0){
     my_printf("B");
   }else if(sum==0){
     my_printf("Tie");
   }return 0;
}
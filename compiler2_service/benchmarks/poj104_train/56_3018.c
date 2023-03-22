#define NUM_ITER 1209586

#include <header.h>

int main_bench(){
   int n,sum,a,i,b,c,d,e;
   my_scanf("%d",&n);
   e=n/10000;
   d=n/1000-e*10;
   c=n/100-e*100-d*10;
   b=n/10-e*1000-d*100-c*10;
   a=n%10;
   sum=a*10000+b*1000+c*100+d*10+e;
   for(i=0;i<5;i++){
	   if(sum%10==0){
		   sum=sum/10;
	   }else
		   break;
   }
   my_printf("%d",sum);
   return 0;
}

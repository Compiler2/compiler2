#define NUM_ITER 1166390

#include <header.h>

int main_bench(){
   int num,a,b,c,d,e,f;
   int sz[6]={100,50,20,10,5,1};
   
   my_scanf("%d",&num);
   a=num/sz[0];
   num=num-a*100;
	   b=num/sz[1];
	   num=num-b*50;
	   c=num/sz[2];
	   num=num-c*20;
	   d=num/sz[3];
	   num=num-d*10;
	   e=num/sz[4];
	   num=num-e*5;
	   f=num;
	   my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}
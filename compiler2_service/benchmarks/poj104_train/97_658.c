#define NUM_ITER 1213100

#include <header.h>

int main_bench(){
   int n,a,b,c,d,e;
   int sz[6];
   my_scanf("%d",&n);
   sz[0]=n/100;
   a=n%100;
   sz[1]=a/50;
   b=a%50;
   sz[2]=b/20;
   c=b%20;
   sz[3]=c/10;
   d=c%10;
   sz[4]=d/5;
   e=d%5;
   sz[5]=e;
   my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",sz[0],sz[1],sz[2],sz[3],sz[4],sz[5]);
	return 0;
}
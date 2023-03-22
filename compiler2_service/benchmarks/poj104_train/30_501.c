#define NUM_ITER 80517

#include <header.h>

int main_bench(){
 int a;
 my_scanf("%d",&a);
 int sum=0;
 int i=0;
 while(i<=a)
 {
	 if((i%7==0||i%10==7||i/10==7)==0)
	 sum=sum+i*i;
	 i++;
 }
 my_printf("%d",sum);
 return 0;
}
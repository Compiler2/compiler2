#define NUM_ITER 1113775

#include <header.h>

int main_bench(){
int a,i=1,j=1;
my_scanf("%d",&a);
while(i*=10)
  if(a/i==0) break;

while(j<i){
  my_printf("%d",(a/j)%10);
  j*=10;
}
}
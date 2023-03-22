#define NUM_ITER 118997

#include <header.h>

int main_bench()
{
  int sum1=0,sum2=0,n;
  my_scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(i%7==0||i==17||i==27||i==37||i==47||i==57||i==67||i==87||i==97||i==71||i==72||
i==73||i==74||i==75||i==76||i==78||i==79){
       sum1=sum1+i*i;
      }
  }
  for(int j=1;j<=n;j++){
    sum2=sum2+j*j;}
my_printf("%d",sum2-sum1);
return 0;
}
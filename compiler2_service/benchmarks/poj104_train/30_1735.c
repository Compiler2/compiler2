#define NUM_ITER 78728

#include <header.h>

int yu7wuguan(int number);
int main_bench()
{
int num,result=0;
my_scanf("%d",&num);
for(int i=1;i<=num;i++){
if(yu7wuguan(i)){
result+=i*i;}
}
my_printf("%d",result);
return 0;
}
int yu7wuguan(int number){
if(number%7==0){
return 0;
}
if(number%10==7||number/10==7){return 0;}
return 1;
}

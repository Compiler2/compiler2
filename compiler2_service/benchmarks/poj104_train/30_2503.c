#define NUM_ITER 54516

#include <header.h>

int main_bench(){
int n,sum=0,k;
my_scanf("%d",&n);
for(k=1;k<=n;k++){
if (yuqiwuguan(k)==1){
sum+=k*k;}
}
my_printf("%d",sum);
return 0;
}
int yuqiwuguan(int number){ 
int i;                       
if(number%7==0){
return 0;}
for(i=number;i>0;i/=10){
if(i%10==7)
return 0;}
return 1;
}
#define NUM_ITER 410728

#include <header.h>

int reverse(int num){

int k=0;
if(num>=0){
while(num>0){
k=k*10+num%10;
num=num/10;
}
k=k+num;
}

else
{
num=0-num;
while(num>0){
k=k*10+num%10;
num=num/10;
}
k=0-k+num;

}
return k;
}
main_bench(){
int i,n;
i=0;
for(i=0;i<6;i++){
my_scanf("%d",&n);
my_printf("%d\n",reverse(n));
}
}

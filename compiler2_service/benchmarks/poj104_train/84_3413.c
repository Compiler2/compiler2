#define NUM_ITER 63818

#include <header.h>

int main_bench(){
int n;
int max1,max2,num;
int exc;
max1=0;
max2=0;
my_scanf("%d",&n);
for(int i=1;i<=n;i++){
my_scanf("%d",&num);
{if(num>max1){
exc=max1;
max1=num;
max2=exc;}else if(num<max1){if(num>max2){
max2=num;
max1=max1;}}
}}
my_printf("%d\n%d\n",max1,max2);

return 0;
}
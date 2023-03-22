#define NUM_ITER 896592

#include <header.h>

int main_bench(){
int sz[10],sz1[6]={100,50,20,10,5,1};
int a,i;
my_scanf("%d",&a);
for(i=0;i<6;i++){
my_printf("%d\n",a/sz1[i]);
a=a%sz1[i];
}
return 0;
}
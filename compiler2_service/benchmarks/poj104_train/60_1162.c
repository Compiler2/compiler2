#define NUM_ITER 3721

#include <header.h>

int main_bench()
{
int n,s,m,i,k,t;
my_scanf("%d",&n);
if(n>=5){
for(i=3;i<n-1;i++){
s=0;
m=0;
for(k=2;k<i;k++){
if(i%k!=0){
s++;
}
}
if(s==i-2){
t=i+2;
for(k=2;k<t;k++){
if(t%k!=0){
m++;
}
}
if(m==i){
my_printf("%d %d\n",i,t);
}
}
}
}
if(n<5){
my_printf("empty");
}
return 0;
}

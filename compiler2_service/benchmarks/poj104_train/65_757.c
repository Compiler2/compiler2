#define NUM_ITER 39945

#include <header.h>

int main_bench(){
int n,a,b,A=0,B=0;
my_scanf("%d",&n);
for(int i=1;i<=n;i++){
my_scanf("%d%d",&a,&b);
{
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
A=A+1;
}
else{
if(a!=b){
B=B+1;
}
}
}
}
if(A==B){
my_printf("Tie");
}
if(A>B){
my_printf("A");
}
if(B>A){
my_printf("B");
}
return 0;
}
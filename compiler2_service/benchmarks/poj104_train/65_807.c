#include <header.h>

int main_bench(){
int n,i,a,b,A,B;
my_scanf("%d", &n);
a=0;
b=0;
for(i=1;i<= n;i++){
my_scanf("%d %d", &A,&B);
if(A==0&&B==0||A==1&&B==1||A==2&&B==2){
a=a;}
else if(A==0&&B==1||A==1&&B==2||A==2&&B==0){
a=a+1;}
else if(A==0&&B==2||A==1&&B==0||A==2&&B==1){
b=b+1;}}
if(a>b){my_printf("A");}
else if(a<b){my_printf("B");}
else if(a=b){my_printf("Tie");}
return 0;
}

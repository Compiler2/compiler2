#define NUM_ITER 32743

#include <header.h>

int main_bench(){
int i,n,x,y,w;
int a,b;
a=0;b=0;

my_scanf("%d",&n);

for(i=1;i<=n;i++){
    my_scanf("%d %d",&x,&y);
    w=y-x;
    if(w==1){
    a++;}else 
    if(w==2){
    b++;}else
    if(w==-1){
    b++;}else
    if(w==-2){
    a++;}
}
if(a>b){
my_printf("A");
}else 
if(a<b){
my_printf("B");
}else {
my_printf("Tie");
}

return 0;
}

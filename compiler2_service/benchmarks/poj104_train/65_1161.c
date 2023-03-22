#define NUM_ITER 37895

#include <header.h>

int main_bench(){
int n,i,a,b,c,d;
my_scanf("%d",&n);
c=0;
d=0;
for(i=1;i<=n;i++){
my_scanf("%d%d",&a,&b);
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
c++;
}else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
d++;
}else if(a==b){
    c=c;
    d=d;
}
}
if(c>d){
my_printf("A");
}
else if(c<d){
my_printf("B");
}else if(c=d){
my_printf("Tie");
}
return 0;
}


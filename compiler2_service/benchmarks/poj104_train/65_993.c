#define NUM_ITER 31751

#include <header.h>

int main_bench(){
    int n,a,b,i,sz[300],s,num;
    s=0;
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d %d\n",&a,&b);
                     if(a==b){
                              num=0;}
                     if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
                                                                  num=1;}
                     
                     if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
                                                                  num=-1;}
                     s=s+num;}
    if(s==0){
             my_printf("Tie");}
    if(s>0){
            my_printf("A");}
    if(s<0){
            my_printf("B");}
    return 0;
} 
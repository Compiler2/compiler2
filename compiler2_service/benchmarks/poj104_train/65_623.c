#define NUM_ITER 31694

#include <header.h>

int main_bench()
{
    int a,b,suma=0,sumb=0,n,i;
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
       my_scanf("%d %d\n",&a,&b);
       if(a==0 && b==1){
           suma=suma+1;}
       if(a==0 && b==2){
           sumb=sumb+1;}
       if(a==1 && b==2){
           suma=suma+1;}
       if(a==1 && b==0){
           sumb=sumb+1;}
       if(a==2 && b==0){
           suma=suma+1;}
       if(a==2 && b==1){
           sumb=sumb+1;}
       if(a==b){  continue;}}
    if(suma>sumb){
         my_printf("A");}
    if(suma<sumb){
         my_printf("B");}
    if(suma==sumb){
         my_printf("Tie");}
    return 0;
}   
       
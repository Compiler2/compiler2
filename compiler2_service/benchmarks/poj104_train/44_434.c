#define NUM_ITER 201193

#include <header.h>

int f(int x){
    int k,r=0;
    for(k=10;;k=k*10){
            if(x/k==0)
            break;
            }
    for(int j=k/10;j>0;j=j/10){
                           r+=x/j*(k/j/10);
                           x=x%j;
                           }
   return r;                         
}
int main_bench(){
    int a[6];
    for(int i=0;i<6;i++){
            my_scanf("%d",&a[i]);
            }
    for(int i=0;i<6;i++){
            my_printf("%d\n",f(a[i]));
            }
    return 0;
}
#define NUM_ITER 60672

#include <header.h>

int main_bench(){
    int n,i,a,b,c;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
                      my_scanf ("%d",&c);
                      if(i==1){
                               a=c;
                               }
                      if(i==2){
                               if(a>c){
                                       b=c;
                                       }else{
                                             b=a;
                                             a=c;
                                             }
                                             }         
                      if(i>2){
                               if(c>a){
                                       b=a;
                                       a=c;
                                       }
                               if((a>c)&&(c>b)){
                                                b=c;
                                                }
                                                }
                                                }        
    my_printf("%d\n%d\n",a,b);
    return 0;
}           
#define NUM_ITER 328407

#include <header.h>

int main_bench(){
    int s,t;
    my_scanf("%d",&s);
    if(s==1){
    my_printf("End");
    }
    while(s!=1){
     if(s%2!=0){
      t=s;
      s=t*3+1;
      my_printf("%d*3+1=%d\n",t,s);
     }
     if(s%2==0){
      t=s;
      s=t/2;
      my_printf("%d/2=%d\n",t,s);
     }
     if(s==1){
     my_printf("End");
     }
     }
    return 0;
}
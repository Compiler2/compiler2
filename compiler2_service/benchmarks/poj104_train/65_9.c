#define NUM_ITER 34045

#include <header.h>

int main_bench(){
    int n,i,a=0,b=0,c,d;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
          my_scanf("%d%d",&c,&d);
          if(c-d==1)b++;
          else if(d-c==1)a++;
          else if(d<c)a++;
          else if(d>c)b++;
    }
    if(a<b)my_printf("B");
    else if(a>b)my_printf("A");
    else my_printf("Tie");
    return 0;
}
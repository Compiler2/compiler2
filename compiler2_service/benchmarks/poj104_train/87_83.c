#define NUM_ITER 16

#include <header.h>

int main_bench(){
    int i;
    for(i=0;i<100000;i++){
       int a,b,c,d,e,f,g;
       my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
       if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)break;
       g=3600*(12+d-a)+60*(e-b)+(f-c);
       my_printf("%d\n",g);
       }
    my_scanf("%d",&i);
    return 0;
}
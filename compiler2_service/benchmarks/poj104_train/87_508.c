#define NUM_ITER 11253

#include <header.h>

int main_bench(){
    int a,b,c,d,e,f,g=0;
    int i,j,x,n,y;

    while(1){
    my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a<1) break;
    i=b*60+c;
    j=e*60+f;
    x=(d+12-a)*3600-i+j;
    my_printf("%d\n",x);
    }
    return 0;
}

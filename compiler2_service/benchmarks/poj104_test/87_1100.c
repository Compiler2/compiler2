#define NUM_ITER 964908

#include <header.h>

int main_bench(){
    int a,b,c,d,e,f;
    while(my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) && a!=0){
        int begin,end,s;
        begin=a*3600+b*60+c;
        end=(d+12)*3600+e*60+f;
        s=end-begin;
    my_printf("%d\n",s);
    }
}

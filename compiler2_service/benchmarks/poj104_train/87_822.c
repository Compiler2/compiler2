#include <header.h>

int main_bench(){
    int a,b,c,d,e,f,time;
    while(1){
        my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a==0){
            break;
        }
        time=(12-a+d)*3600+e*60+f-b*60-c;
        my_printf("%d\n",time);
    }
    return 0;
}

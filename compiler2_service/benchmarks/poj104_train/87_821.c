#define NUM_ITER 13803

#include <header.h>

int main_bench(){
    int a,b,c,d,e,f,g;
    int z=0;
    while(1)  {my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a==0){break;}
    else {z=(d+12-a)*3600-b*60-c+e*60+f;}
     my_printf("%d\n",z);
    }

    
    return 0;
    
}
#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f,g,h;
    while(my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)&&a!=0){
    h=60*60*(12+d-a)+60*(e-b)+f-c;
    if(a==0){}
    else{my_printf("%d\n",h);}
    }
    return 0;
}


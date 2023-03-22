#include <header.h>

int main_bench(){
    int n,i,s;
    my_scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++){
       if(i%7&&i/10!=7&&i%10!=7)s+=i*i;
    }
    my_printf("%d\n",s);
    return 0;
}

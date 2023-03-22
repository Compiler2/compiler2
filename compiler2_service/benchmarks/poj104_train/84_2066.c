#include <header.h>

int main_bench(){
    int c,d,n;
    int b=0;
    int a=0;
    int i=1;
    my_scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        my_scanf("%d\n",&c);
        if(b>a){
              d=a;
              a=b;
              b=d;
        }
        if(c>=a&&a>=b){
              b=a;
              a=c;
        }
        if(a>c&&c>b){
              b=c;
        }
    }
    my_printf("%d\n%d",a,b);
    return 0;
}

        
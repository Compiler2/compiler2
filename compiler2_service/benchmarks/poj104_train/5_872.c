#include <header.h>

int main_bench(){
    double n,x,y,m,t;
    x=0;
    int i,c;
    c=0;
    char a[501],b[501];
    my_scanf("%lf",&n);
    my_scanf("%s%s",a,b);
    m=strlen(a);
    t=strlen(b);
    if(m!=t){
        my_printf("error");
    }else{
        for(i=0;i<m;i++){
            if(((a[i]=='A')||(a[i]=='T')||(a[i]=='C')||(a[i]=='G'))&&((b[i]=='A')||(b[i]=='T')||(b[i]=='C')||(b[i]=='G'))){
                if(a[i]==b[i]){
                    x=x+1;
                }
            }else{
                c=c+1;
            }
        }
        y=x/m;
        if(c>0){
            my_printf("error");
        }else{
            if(y>n){
                my_printf("yes");
            }else{
                my_printf("no");
            }
        }
    }
    return 0;
}

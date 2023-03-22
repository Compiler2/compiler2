#include <header.h>

int main_bench(){
    char a[501],b[501];
    double c,m,n=0,p,q;
    int i,t=0;
    my_scanf("%lf",&c);
    my_scanf("%s",a);
    my_scanf("%s",b);
    q=strlen(a);
    p=strlen(b);
    if(q!=p){
        t=t+1;
    }
    for(i=0;i<q;i++){
        if(a[i]!='T'&&a[i]!='C'&&a[i]!='G'&&a[i]!='A'){
            t=t+1;
        }
    }
    for(i=0;i<p;i++){
        if(b[i]!='T'&&b[i]!='C'&&b[i]!='G'&&b[i]!='A'){
            t=t+1;
        }
    }
    if(t!=0){
        my_printf("error");
    }
    else{
        for(i=0;i<p;i++){
            if(a[i]==b[i]){
                n=n+1;
            }
        }
        m=n/p;
        if(m>c)my_printf("yes");
        else my_printf("no");
    }
    return 0;
}

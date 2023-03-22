#include <header.h>

int main_bench()
{
    char a[501],b[501];
    double n,d,c,r;
    int i,k,s;
    my_scanf("%lf",&n);
    my_scanf("%s\n%s",a,b);
    d=strlen(a);
    c=strlen(b);
    k=0;
    if(c!=d){
        my_printf("error");
    return 0;
    }
    else{
        for(i=0;i<c;i++){
            if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
                k++;
            if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
                k++;
        }
        if(k!=0){
            my_printf("error");
            return 0;
        }
    }
        s=0;
    for(i=0;i<c;i++){
        if(a[i]==b[i])
            s++;
    }
    r=s/d;
    if(r<=n)
        my_printf("no");
    if(r>n)
        my_printf("yes");
    return 0;
}
#define NUM_ITER 870565

#include <header.h>

int main_bench(){
    int i,n,l1,l2,l;
    double t,c;
    char a[500];
    char b[500];
    my_scanf("%lf",&t);
    my_scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    
    if(l1!=l2){
        my_printf("error");
        return 0;
    }
    l=l1;
    for(i=0;i<l;i++){
        if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
            my_printf("error");
            return 0;
        }
    }
    for(i=0;i<l;i++){
        if((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')){
            my_printf("error");
            return 0;
        }
    }
    for(n=0,i=0;i<l;i++){
        if(a[i]==b[i]){
            n++;
        }
    }
    c=1.0*n/l;
    
    if(c>t){
        my_printf("yes");
    }
    else{
        my_printf("no");
    }
    return 0;
}

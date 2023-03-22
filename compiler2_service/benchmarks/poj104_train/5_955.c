#define NUM_ITER 924428

#include <header.h>

int main_bench(){
    char a[510],d[510];
    int i,e;
    double bl,k;
    my_scanf("%lf",&k);
    my_scanf("%s",a);
    my_scanf("%s",d);
    e=0;
    int len1=strlen(a);
    int len2=strlen(d);
    if(len1!=len2){
        my_printf("error");
    }else{
    for(i=0;i<len1;i++){
        if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
            my_printf("error");
            return 0;
        }
        if(d[i]!='A'&&d[i]!='T'&&d[i]!='C'&&d[i]!='G'){
            my_printf("error");
            return 0;
        }
        else{
            if(a[i]==d[i]){
                e++;
            }
        }
    }
    bl=1.0*e/len1;
    if(bl>k){
        my_printf("yes");
    }else{
        my_printf("no");
    }
    }return 0;
}

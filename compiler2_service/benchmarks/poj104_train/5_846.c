#define NUM_ITER 824763

#include <header.h>

int main_bench(){
    char a[501],b[501],ratio[20];
    double r,R;
    int i,c;
    gets(ratio);
    r=atof(ratio);
    gets(a);
    gets(b);
    if(strlen(a)!=strlen(b)){
        my_printf("error");
        return 0;
    }
    for(i=0;a[i]!='\0';i++){
        if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
            my_printf("error");
            return 0;
        }
    }
    c=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b[i]){
            c=c+1;
        }
    }
    R=(1.0*c)/strlen(a);
    if(R>=r){
        my_printf("yes");
    }else{
        my_printf("no");
    }
    return 0;
}
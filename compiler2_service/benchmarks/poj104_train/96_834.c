#define NUM_ITER 967660

#include <header.h>

int main_bench(){
    char a[101];
    int b[102],c[101];
    b[0]=0;
    gets(a);
    for(int i=1;i<=strlen(a);i++){
            b[i]=a[i-1]-48;
            c[i]=(b[i-1]*10+b[i])/13;
            b[i]=(b[i-1]*10+b[i])%13;
            }
    if(strlen(a)==1||(strlen(a)==2&&c[2]==0))
    my_printf("0");
    else{
    if(c[2]>0)
    my_printf("%d",c[2]);
    for(int i=3;i<=strlen(a);i++){
    my_printf("%d",c[i]);
}
}
    my_printf("\n%d",b[strlen(a)]);
    return 0;
}
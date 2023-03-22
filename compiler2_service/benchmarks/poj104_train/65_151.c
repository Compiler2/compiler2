#include <header.h>

int main_bench()
{
    int n,i,a,b,as,bs,tie;
    as=0;
    bs=0;
    tie=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
        my_scanf("%d%d",&a,&b);
        if(a==0&&b==1){
            as++;}
        else if(a==0&&b==0){
            tie++;}
        else if(a==1&&b==1){
            tie++;}
        else if(a==1&&b==2){
            as++;}
        else if(a==2&&b==0){
            as++;}
        else if(a==2&&b==2){
            tie++;}
    }
    bs=n-as-tie;
    if(as>bs){my_printf("A");}
    else if(as-bs==0){my_printf("Tie");}
    else if(as<bs){my_printf("B");}
    return 0;
}
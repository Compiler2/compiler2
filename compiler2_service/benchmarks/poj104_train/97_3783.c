#include <header.h>

int sort(int a,int b);
int main_bench(){
    int money;
    my_scanf("%d",&money);
    money=sort(money,100);
    money=sort(money,50);
    money=sort(money,20);
    money=sort(money,10);
    money=sort(money,5);
    money=sort(money,1);
    return 0;
}
int sort(int a,int b){
    my_printf("%d\n",a/b);
    return a%b;
}
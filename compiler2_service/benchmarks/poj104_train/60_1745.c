#include <header.h>

int f(int n){
    int i,p;
    for(i=2;i<=n;i++){
        if(n%i==0&&n!=i){
            p=0;
            break;
            }
        else p=1;
        }
    return p;
    }
int main_bench(){
    int n,i,o=0;
    my_scanf("%d",&n);
    for(i=2;i<=n-2;i++){
        if(f(i)==1&&f(i+2)==1){
            my_printf("%d %d\n",i,i+2);
            o=1;
            }
        }
    if(o==0) my_printf("empty\n");
   
    
    my_scanf("%d",&i);
    return 0;
    }

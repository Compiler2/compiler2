#include <header.h>

int main_bench(){
    int a,b,i,n,p=0,q=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a);
        my_scanf("%d",&b);
        if((a-b==1)||(b-a==2)){
            q++;
        }else if((b-a==1)||(a-b==2)){
            p++;
        }else if(a==b){
            p=p;
            q=q;
        }
    }
    if(p>q){
        my_printf("A");
    }else if(p<q){
        my_printf("B");
    }else if(p==q){
        my_printf("Tie");
    }
    return 0;
}

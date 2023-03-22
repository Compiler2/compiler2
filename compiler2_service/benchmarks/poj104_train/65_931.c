#include <header.h>

int main_bench(){
    int a,b,n,i,k=0,p=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a,&b);
        if(a==0&&b==1){k++;}
        else if(a==1&&b==2){k++;}
        else if(a==2&&b==0){k++;}
        else if(a==b){p++;}
    }
    if(k>1.0*(n-p)/2){my_printf("A");}
    else if(k<1.0*(n-p)/2){my_printf("B");}
    else{my_printf("Tie");}
    return 0;
}

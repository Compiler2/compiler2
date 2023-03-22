#include <header.h>

int main_bench(){
    int a,b,n,i,c=0,d=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a,&b);
        if(a==0&&b==1){c++;}
        if(a==1&&b==2){c++;}
        if(a==2&&b==0){c++;}
        if(a==1&&b==0){d++;}
        if(a==2&&b==1){d++;}
        if(a==0&&b==2){d++;}
        if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2)){continue;}
    
    }
    if(c>d){my_printf("A");}
    if(c<d){my_printf("B");}
    if(c==d){my_printf("Tie");}
    return 0;
}

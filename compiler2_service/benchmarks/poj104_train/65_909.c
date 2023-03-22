#include <header.h>

int main_bench(){
    int n,a,b,sa=0,sb=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%d%d",&a,&b);
         if(a-b==1){
            sb++;
        }
         else if(b-a==1){
            sa++;
        }
        else if(a==0&&b==2){sb++;}
        else if(a==2&&b==0){sa++;}
    
    }
    if(sa>sb){
        my_printf("A");
    }
     if(sa<sb){
        my_printf("B");
    }
     if(sa==sb){
        my_printf("Tie");
    }
    
 
    return 0;
}


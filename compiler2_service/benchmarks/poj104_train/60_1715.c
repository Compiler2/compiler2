#define NUM_ITER 40487

#include <header.h>

int main_bench(){
    int n,c,b=0;
    my_scanf("%d",&n);
    if(n<5)
    my_printf("empty");
    else{
    for(int i=3;i<=n;i=i+2){
            c=1;
            for(int j=3;j<i;j=j+2){
                    if(i%j==0){
                    c=0;
                    b=0; 
                    break;
                    }
                    }
            if(c==1)
            b++;
            if(b>1)
            my_printf("%d %d\n",i-2,i);
            }
    }  
    return 0;
}
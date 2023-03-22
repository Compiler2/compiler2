#define NUM_ITER 57742

#include <header.h>

int main_bench(){
    int n,i,a,tuzhi[25];
    my_scanf("%d",&n);
    tuzhi[0]=1;
    tuzhi[1]=1;
    for(i=2;i<25;i++){
           tuzhi[i]=tuzhi[i-1]+tuzhi[i-2]; 
    }          
    for(i=0;i<n;i++){
           my_scanf("%d",&a);
           my_printf("%d\n",tuzhi[a-1]);
    }
    my_scanf("%d",&n);
    return 0;
}        

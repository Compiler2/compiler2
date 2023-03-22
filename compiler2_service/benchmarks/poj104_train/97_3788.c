#define NUM_ITER 200711

#include <header.h>

int main_bench(){
    int n,m;
    int sz[6]={100,50,20,10,5,1};
    int a[10000]={0};
    my_scanf("%d",&n);
    for(int i=0;i<6;i++){
        m=n/sz[i];
        n=n-m*sz[i];
        a[i]=m;
        
    }
    for(int p=0;p<6;p++){
        my_printf("%d\n",a[p]);}
        
    
        return 0;
    
    
    
}

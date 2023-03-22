#include <header.h>


int main_bench(){
    int n,i,k,j,f[1005];
    double sum=0.0,r;
    f[0]=1;
    f[1]=2;
    for(i=2;i<=1000;i++){
        f[i]=f[i-1]+f[i-2];
        }   
    my_scanf("%d",&n);
    for(j=0;j<n;j++){
        my_scanf("%d",&k);
        for(i=0;i<k;i++){
            r=1.0*f[i+1]/f[i];
            sum+=r;
            }
        my_printf("%.3lf\n",sum);
        sum=0.0;
        }
    
    
    
    
    my_scanf("%d",&i);
    return 0;
    }

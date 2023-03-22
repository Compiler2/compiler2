#define NUM_ITER 17966

#include <header.h>

int main_bench()
{
    int n,i,x[500],s,t,y[500],k,m;
    k=0;
    my_scanf("%d ",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&x[i]);
        s=x[i]%2;
        if(s==1){
            y[k]=x[i];
            k=k+1;
        }
    }
    for(t=0;t<k;t++){
        for(i=k-1;i>t;i--){
            if(y[i]<y[i-1]){
                m=y[i];
                y[i]=y[i-1];
                y[i-1]=m;
            }
        }
    }
    for(i=0;i<k-1;i++){
        my_printf("%d,",y[i]);
    }
    my_printf("%d",y[k-1]);
    return 0;
}

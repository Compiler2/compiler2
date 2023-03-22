#define NUM_ITER 5481

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int a[n];
    int i,k,e,max;
    for(i=0;i<n;i++){
        my_scanf("%d",&(a[i]));
        
    }
    for(k=1;k<=n;k++){
        max=0;
        for(i=0;i<=n-k;i++){
            if(a[i]>a[max]){
                max=i;
            }
        }
        if(max!=n-k){
            e=a[max];
            a[max]=a[n-k];
            a[n-k]=e;
            
        }
        
    }
    for(i=0;i<n;i++){
        if((a[i])%2==1){
            if(i==n-2||i==n-1){
            my_printf("%d",a[i]);
        }else {
            my_printf("%d,",a[i]);
        }
    }
}
return 0;
}

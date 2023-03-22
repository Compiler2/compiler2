#define NUM_ITER 5525

#include <header.h>

int main_bench(){
    int n,i,e,k=0,x=0;
    my_scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        my_scanf("%d",&(a[i]));
    }
    for(int k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i+1];
                a[i+1]=a[i];
                a[i]=e;
            }
        }
    }
    for(i=0;i<n;i++){
        if((a[i])%2==1){
            k++;
        }
    }
    int b[k];
    for(i=0;i<n;i++){
        if((a[i]%2)==1){
            b[x]=a[i];
            x++;
        }
    }
    for(i=0;i<k-1;i++){
        my_printf("%d,",b[i]);
    }
    my_printf("%d",b[k-1]);
    return 0;
}

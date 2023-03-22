#define NUM_ITER 16657

#include <header.h>

int main_bench(){
    int n,i,t,d,m,j,k;
    my_scanf("%d",&n);
    int a[n];
    t=0;
    for(i=0;i<n;i++){
        my_scanf("%d",&(a[i]));
        d=a[i]%2;
        if(d==1){
            t=t+1;
        }
    }
    int b[t];
    m=0;
    for(i=0;i<n;i++){
        d=a[i]%2;
        if(d==1){
          b[m]=a[i];
          m=m+1;
        }
    }
    for(m=0;m<t;m++){
        for(j=t-1;j>m;j--){
            if(b[j]<b[j-1]){
                k=b[j];
                b[j]=b[j-1];
                b[j-1]=k;
            }
        }
    }
    for(m=0;m<(t-1);m++){
        my_printf("%d,",b[m]);
    }
    my_printf("%d",b[t-1]);
    return 0;
}


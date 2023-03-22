#define NUM_ITER 11085

#include <header.h>

int main_bench(){
    int n,a[10000],b[10000],i,j,c[10000],min=10000,max=0,s=0;
    my_scanf("%d",&n);
    for (i=1;i<=n;i++)  my_scanf("%d %d",&a[i],&b[i]);
    for (i=1;i<=n;i++) {
        if (a[i]<min) min=a[i];
    }
    for (i=1;i<=n;i++) {
        if (b[i]>max) max=b[i];
    }
    for (i=min;i<=max;i++){
        c[i]=0;
    }
    for (i=1;i<=n;i++){
        for (j=a[i];j<b[i];j++) {
            c[j]=1;
        }
    }
    for (j=min;j<=max;j++){
        s=s+c[j];
    }
    if (s==(max-min)) my_printf("%d %d",min,max);
    else my_printf("no");
    return 0;
}

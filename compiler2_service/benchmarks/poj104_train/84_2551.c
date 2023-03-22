#include <header.h>

int main_bench()
{
    int n,t,i,j,a[100],k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[k])
                k=j;
        }
        if(k!=i){
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    my_printf("%d\n%d",a[n-1],a[n-2]);
    return 0;
}
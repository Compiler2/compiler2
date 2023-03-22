#define NUM_ITER 4372

#include <header.h>

int main_bench(){
    int t,i,j,n,p,max;
    int a[1000],b[1000];
    my_scanf("%d",&n);
    for (i=1;i<=n;i++){
        my_scanf("%d%d",&(a[i]),&(b[i]));
    }
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            if (a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
                t=b[j];b[j]=b[j+1];b[j+1]=t;
            }
        }
    } max=b[1]; p=1;
    for (i=2;i<=n;i++){
        if (a[i]<=max){
            if (b[i]>max){max=b[i];}    
        }else {p=0;break;}
    }
    if (max<b[n]){max=b[n];}
    if (p==0){
        my_printf("no");
    }else{my_printf("%d %d",a[1],max);}
    return 0;
}


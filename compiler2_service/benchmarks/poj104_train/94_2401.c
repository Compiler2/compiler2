#define NUM_ITER 17249

#include <header.h>

int main_bench(){
    int n,e;
    my_scanf("%d",&n);
    int sz[n],zs[500];
    for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    int k=0,f;
    for(int i=0;i<n;i++){
        e=sz[i]%2;
        if(e!=0){
            f=sz[i];
            sz[i]=zs[k];
            zs[k]=f;
            k++;
        }
        }
    int b;
    for(int a=1;a<=k;a++){
        for(int c=0;c<k-a;c++){
            if(zs[c]>zs[c+1]){
                b=zs[c+1];
                zs[c+1]=zs[c];
                zs[c]=b;
                }
            }
        }
    for(int c=0;c<k-1;c++){
        my_printf("%d,",zs[c]);
    }
     my_printf("%d",zs[k-1]);
    return 0;
}

#define NUM_ITER 3882

#include <header.h>

int main_bench(){
    int n,i,q[100000],z[100000],k,e,f,g;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&q[i],&z[i]);
    }
    for(k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
            if(q[i]>q[i+1]){
                e=q[i+1];
                q[i+1]=q[i];
                q[i]=e;
                e=z[i+1];
                z[i+1]=z[i];
                z[i]=e;
            }
        }
    }
    e=z[0];
    for(k=1;k<n;k++){
    for(i=0;i<k;i++){
        if(z[i]>=e){
            e=z[i];
        }
    }
    if(q[k]<=e){
      f=e;
      g=1;
    }
    else{
        g=0;
        break;
    }
    }
    if(g==1){
      my_printf("%d %d",q[0],f);
    }
    if(g==0){
        my_printf("no\n");
    }
    return 0;
}







#include <header.h>

int main_bench(){
    int n,i,min,max,k,p,q,s;
    my_scanf("%d\n",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        my_scanf("%d%d\n",&(a[i]),&(b[i]));
    }
    min=a[0],max=b[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(b[i]>max){
            max=b[i];
        }
    }
    for(k=1;k<n;k++){
        for(i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                p=a[i];
                a[i]=a[i+1];
                a[i+1]=p;
                q=b[i];
                b[i]=b[i+1];
                b[i+1]=q;
            }
        }
    }
    s=0;
    int c[n];
    for(i=1;i<n;i++){
        for(k=0;k<i;k++){
        if(b[k]<a[i]){
            c[i]=1;
        }else{
            c[i]=0;
            break;
        }
    }
    }
    for(i=1;i<n;i++){
        s=s+c[i];
    }
    if(s==0){
        my_printf("%d %d",min,max);
    }else{
        my_printf("no");
    }
  return 0;
}



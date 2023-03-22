#include <header.h>

main_bench(){
 int sz[300],a[300];
    char x;
    int n,i,j,k,p,q;
    x=',';
    n=0;
    my_scanf("%d",&q);
    for(i=0;i<q;i++){
      my_scanf("%d",&a[i]);
      if(a[i]%2==1){
        sz[n]=a[i];
        n++;
      }
    }
    n=n-1;
    for(j=1;j<=n;j++){
    for(i=0;i<n;i++){
      k=i+1;
      if(sz[k]<sz[i]){
        p=sz[k];
        sz[k]=sz[i];
        sz[i]=p;
      }
    }
    }
    for(i=0;i<=n;i++){
      if(i<n){
        my_printf("%d",sz[i]);
        my_printf("%c",x);
      }else{
        my_printf("%d",sz[i]);
      }
    }
return 0;
}
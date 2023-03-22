#include <header.h>

int main_bench() {
    int n,i,k,m,x,p;
    my_scanf("%d",&n);
    int a[n];
    k=0;
    for(i=1;i<=n;i++) {
        my_scanf("%d",&m);
        if(m%2==1) {
            k++; a[k]=m; 
        }
    }
  for(p=0;p<k;p++) {
      for(i=1;i<=k-p;i++) {
          if(a[i]<a[i+1]) {
              x=a[i+1];
              a[i+1]=a[i];
              a[i]=x;
          }
      }
  }
  for(i=1;i<k;i++) {
      my_printf("%d,",a[k-i+1]) ;
  }
  my_printf("%d",a[1]) ;
  return 0 ;
  
  
  
}


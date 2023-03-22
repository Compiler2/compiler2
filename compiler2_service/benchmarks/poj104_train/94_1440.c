#define NUM_ITER 18090

#include <header.h>

int main_bench(){
int i,n,m,l,p;
my_scanf("%d",&n);
int a[n],b[n];
m=0;
p=1;
for(i=0;i<n;i++){
   my_scanf("%d",&a[i]);
   if(a[i]%2==1){
   b[m]=a[i];
      if(p<b[m]){
        p=b[m];
        }
     m=m+1;
   }
}
for(i=1;i<p;i=i+2){
   for(l=0;l<m;l++){
      if(b[l]==i){
       my_printf("%d,",b[l]);
       }
    }
}
my_printf("%d",p);
return 0;
}
#define NUM_ITER 4086

#include <header.h>

int main_bench(){
  int n,i,j,e,k,m,d,x;
   my_scanf("%d", &n);
  int a[n],b[n];
  double s;
 for(i=0;i<n;i++){
  my_scanf("%d %d", &a[i],&b[i]);
   }
 x=a[0];d=b[0];
  for(i=0;i<n;i++){
          if(a[i]<x){
            x=a[i];
           }
          if(b[i]>d){
            d=b[i];
           }
       }
  for(s=(x+0.5);s<d;s++){
        k=0;
     for(m=0;m<n;m++){
        if(s<=b[m]&&s>=a[m]){
           k=1;
           }
        else{
           k=k;
           }
        }
   if(k==0){
         my_printf("no");
           break;
        }
}
    if(k!=0)
    {
        my_printf("%d %d",x,d);
    }
 return 0;
}

      


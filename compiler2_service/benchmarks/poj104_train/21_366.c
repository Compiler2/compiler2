#define NUM_ITER 4762

#include <header.h>

int main_bench()
{
    int n,i,c[300],k;
    double a=0,b[300];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
    my_scanf("%d",&c[i]);
    a+=c[i];
 }
 a/=n;
    for(i=0;i<n;i++){
     b[i]=c[i]-a;
 }
    for(i=n-1;i>0;i--){
  for(k=0;k<i;k++){
   if(b[k]>b[k+1]){
   double t=b[k];
   b[k]=b[k+1];
   b[k+1]=t;}
  }
 }
 if(b[n-1]==0-b[0])
  my_printf("%.0lf,%.0lf",b[0]+a,b[n-1]+a);
 else if(b[n-1]<0-b[0])
  my_printf("%.0lf",b[0]+a);
else if(b[n-1]>0-b[0])
  my_printf("%.0lf",b[n-1]+a);
 return 0;
}
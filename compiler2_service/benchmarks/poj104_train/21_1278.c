#define NUM_ITER 706788

#include <header.h>

int main_bench()
{
 int i;
 double n,q=0,max,a[301]={0},b[301],c[3]={0};
 my_scanf("%lf",&n);
 for(i=0;i<n;i++)
 {
  my_scanf("%lf",&a[i]);
  q=q+a[i];
 }
 q=q/n;
 for(i=0;i<n;i++)
 {
  b[i]=fabs(a[i]-q);;
 }
 max=b[0];
 c[0]=a[0];
 for(i=1;i<n;i++)
  if(b[i]>max)
  {
   max=b[i];
   c[0]=a[i];
  }
 
 for(i=1;i<n;i++)
  if(b[i]==max&&a[i]!=c[0])
  {c[1]=a[i];
  break;}
  if(c[1]==0){
  my_printf("%1.lf\n",c[0]);
  }
 else
  if(c[0]>c[1]){
  my_printf("%1.lf,%1.lf",c[1],c[0]);}
  else{
      my_printf("%1.lf,%1.lf",c[0],c[1]);}
 
 return 0;
}






#define NUM_ITER 52033

#include <header.h>

int main_bench(){
   int n,i,s1=0,s2=0,s3=0,s4,sz[100];
   double p1,p2,p3,p4;
   my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
      my_scanf("%d ",&sz[i]);
    }
   for(i=0;i<n;i++){
     if(sz[i]<=18){
       s1++; 
     }
     if(sz[i]>=19&&sz[i]<=35){
       s2++; 
     }
     if(sz[i]>=36&&sz[i]<=60){
       s3++; 
     }
   }
    s4=n-s1-s2-s3;
   p1=(double)100*s1/n;
   p2=(double)100*s2/n;
   p3=(double)100*s3/n;
   p4=(double)(100*s4)/n;
  my_printf("1-18: %.2lf%%\n",p1);
  my_printf("19-35: %.2lf%%\n",p2);
  my_printf("36-60: %.2lf%%\n",p3);
  my_printf("60??: %.2lf%%",p4);
 return 0;
}
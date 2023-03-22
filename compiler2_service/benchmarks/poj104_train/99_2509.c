#define NUM_ITER 53677

#include <header.h>

int main_bench(){
    int n,i,a[101];
    int s1=0,s2=0,s3=0,s4=0;
    double m1,m2,m3,m4;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
         my_scanf("%d",&a[i]);
         if(1<=a[i]&&a[i]<=18){
                s1++;
         }
         else if(19<=a[i]&&a[i]<=35){
                s2++;
         }
         else if(36<=a[i]&&a[i]<=60){
                s3++;
         }
         else if(a[i]>60){
                s4++;
         }
     }
     m1=(double)s1/n*100;
     m2=(double)s2/n*100;
     m3=(double)s3/n*100;
     m4=(double)s4/n*100;
     my_printf("1-18: %.2lf",m1);
     my_printf("%%\n") ;     
     my_printf("19-35: %.2lf",m2);
     my_printf("%%\n") ;    
     my_printf("36-60: %.2lf",m3);
     my_printf("%%\n") ;    
     my_printf("60??: %.2lf",m4);
     my_printf("%%\n") ; 
     return 0;
}   




#include <header.h>

int main_bench(){
    int sz[100];
    int i,n;
    my_scanf("%d",&n);
    double b1,b2,b3,b4;
    int sum1,sum2,sum3,sum4;
    sum1=sum2=sum3=sum4=0;        
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
        if(sz[i]<=18){
          sum1++;
          }
       else if(sz[i]>=19&&sz[i]<=35){
               sum2++;
               }
       else if(sz[i]>=36&&sz[i]<=60){
               sum3++;
               }
       else if(sz[i]>60){
               sum4++;
               }
       }

      b1=(double)100*sum1/n;
      b2=(double)100*sum2/n;
      b3=(double)100*sum3/n;
      b4=(double)100*sum4/n;

 my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n",b1,b2);
my_printf("36-60: %.2lf%%\n60??: %.2lf%%\n",b3,b4);
return 0;
}
         

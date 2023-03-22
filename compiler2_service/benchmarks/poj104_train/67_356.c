#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int sum[100],eff[100];
    my_scanf("%d%d",&sum[0],&eff[0]);
    double result;
    result=(double)eff[0]/sum[0];
    double a[100];
    for(int i=1;i<n;i++){
     my_scanf("%d%d",&sum[i],&eff[i]);
     a[i]=(double)eff[i]/sum[i];
     if(a[i]>result){
       if((a[i]-result)>0.05)
       my_printf("better\n");
       else if((a[i]-result)<=0.05)
       my_printf("same\n");
       }
     else if(a[i]<result){
      if((result-a[i])>0.05)
       my_printf("worse\n");
      else if((result-a[i])<=0.05)
       my_printf("same\n");
     }
     else if(a[i]==result)
       my_printf("same\n");
    }
return 0;
}
         
       
     
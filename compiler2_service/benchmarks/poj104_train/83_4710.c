#define NUM_ITER 27298

#include <header.h>

int main_bench()
{
    int n,F=0,i;
    my_scanf("%d",&n);
    int a[n],b[n];
    double g[n],G[n],GPA,sum=0.00;
    for(i=0;i<n;i++)
    {
         my_scanf("%d",&a[i]);
         F+=a[i];
    }
    for(i=0;i<n;i++)
    {
         my_scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
         if(b[i]<60){
               g[i]=0.00;
         }else if(b[i]<=63){
               g[i]=1.00 ;
         }else if(b[i]<=67){
               g[i]=1.50;
         }else if(b[i]<=71){
               g[i]=2.00;
         }else if(b[i]<=74){
               g[i]=2.30;
         }else if(b[i]<=77){
               g[i]=2.70;
         }else if(b[i]<=81){
               g[i]=3.00;
         }else if(b[i]<=84){
               g[i]=3.30;
         }else if(b[i]<=89){
               g[i]=3.70;
         }else if(b[i]<=100){
               g[i]=4.00;
         }
    }
    for(i=0;i<n;i++)
    {
         G[i]=g[i]*a[i];
         sum+=G[i];
    }
      GPA=sum/F;
      my_printf("%.2f",GPA);
      return 0;
}
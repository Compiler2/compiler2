#define NUM_ITER 1

#include <header.h>

int main_bench()
{ 
 int nn,kk;
 int calculate(int n,int k);
 
 my_scanf("%d %d",&nn,&kk);
 calculate(nn,kk);
 
 return 0;
}
 
     int calculate(int n,int k)
    {int na,i;
     int sum[100];
     
        na=1;
        sum[0]=na*n+k;
    
            for(i=1;i<=n-1;i++)
             {  sum[i]=n*sum[i-1]/(n-1)+k;
                 if((n*sum[i-1]%(n-1))!=0){
                                              na=na+1;
                                              sum[0]=na*n+k;
                                              i=0;
                                             }
                                             
                                             
                
              }
      my_printf("%d",sum[n-1]);
    }
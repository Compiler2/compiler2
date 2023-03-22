#include <header.h>

int main_bench()
{
  int n,k,a[1001];
  int i,j,sum,e=0;
  my_scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
                   my_scanf("%d",&a[i]);
                   }
  
  for(i=0;i<n-1;i++){
                     for(j=i+1;j<n;j++){
                                        sum=a[i]+a[j];
                                       if(sum==k){
                                                  e=1;
                                                  break;
                                                  }                                                                   
                                        }
                     if(e==1)
                    
                     break;
                      
                    
                    
                     }
                     if(e==1)
                      my_printf("yes");
                     if(e!=1)
                     my_printf("no");
  
    my_scanf("%d ",&n);
    return 0;
}

   
                   

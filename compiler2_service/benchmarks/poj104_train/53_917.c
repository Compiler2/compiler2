#define NUM_ITER 6165

#include <header.h>


int main_bench()
{
    int n,i,a[300],m,e;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){  
                     my_scanf("%d",&a[i]);
                     }
    
    for(i=0;i<n;i++){
                     for(m=0;m<i;m++){
                                      if(a[i]==a[m])
                                      a[i]=-100;
                                      }
                                      }
    
    for(i=n-1;i>0;i--){
                       if(a[i]!=-100){
                                      e=a[i];
                                      break;
                                      }
                                      }
                                      
    for(i=0;i<n;i++){
                     if(a[i]==e)  break;
                     if(a[i]!=-100){
                                    my_printf("%d,",a[i]);
                                    } 
                                    }
    
    my_printf("%d\n",e);
                                    

    
     

  return 0;
}
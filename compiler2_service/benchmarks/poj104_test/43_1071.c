#define NUM_ITER 13492

#include <header.h>


int main_bench()
{
    int m,i,j,k,mod,h=1;
    my_scanf("%d",&m);
    
    for(i=3;i<=m/2;i=i+2) {
                          for(j=2;j<i;j=j+1){
                          mod=i%j;
                          if(mod==0){h=0;}
                          }
                          if(h!=0){
                                      for(k=2;k<(m-i);k=k+1){
                                                             mod=(m-i)%k;
                                                             if(mod==0){h=0;}
                                                             }
                                      if(h!=0){
                                                  my_printf("%d %d\n",i,m-i);
                                                  }                       
                                      
                                      }
						  h=1;
						
                          }             
  

  return 0;
}

#define NUM_ITER 36452

#include <header.h>


int main_bench()
{ int n,i;
  int a,b;
  int t=0,m=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
                   my_scanf("%d %d",&a,&b);
                   if(a==b){
                            t=t+1;
                            m=m+1;
                            }else if(((a==0)&&(b==1))||((a==1)&&(b==2))||((a==2)&&(b==0))){
                                  t=t+1;
                                  
                                  }else{
                                        m=m+1;
                                        
                                        }
                   }
                   if(t==m){my_printf("Tie\n");}else if(t>m){
                                                  my_printf("A\n");}else {my_printf("B\n");}
 
 
  return 0;
}

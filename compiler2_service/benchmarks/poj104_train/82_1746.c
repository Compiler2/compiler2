#define NUM_ITER 36913

#include <header.h>



int main_bench()
{
    int n,i,m=0,a,b,max=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
                        my_scanf("%d %d",&a,&b);
                        if(a>=90&&a<=140&&b>=60&&b<=90){
                                                    m=m+1;
                                                    }
                        else{
                             if(m>max){ max=m;}
                            
                             m=0;
                             }                            
                                                    
                        
                        
                        }
  if(m>max){ max=m;}                      
  if(max==0){my_printf("%d\n",m);}
  
  
  else{my_printf("%d\n",max);}
	
  return 0;
}
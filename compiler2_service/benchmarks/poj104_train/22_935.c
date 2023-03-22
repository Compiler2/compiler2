#include <header.h>



int main_bench()
{
    int a,max=0,secmax=0;
    char b;
    
    do
    {
         my_scanf("%d%c",&a,&b);
         if (max<a){
                    secmax=max;
                    max=a;
                    }
         else if(a<max&&a>secmax){
              secmax=a;
              }
         else if(a==max||a==secmax){}
         else if(a<secmax){}
      
      
    }
    while(b==',');
         if (secmax==0){my_printf("No\n");}
         
         else{my_printf("%d\n",secmax);}
        
    
    
 
      
       
       
  
  	
  return 0;
}

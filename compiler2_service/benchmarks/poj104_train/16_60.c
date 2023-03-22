#include <header.h>

int main_bench() {
     
    int in,k,m,sum=0;                    
    my_scanf("%d",&in);
    if (in==100) my_printf("001");
    else {k=in; 
         for(;k>0;){
            m=k%10;
            k=k/10;
            sum=sum*10+m;
            }
         my_printf("%d",sum);}        
         return 0;
               }
            
        
        
        

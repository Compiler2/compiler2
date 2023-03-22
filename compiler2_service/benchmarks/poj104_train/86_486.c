#include <header.h>

int main_bench(){
    int i,j,n,sum,m,f;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){f=1;
                     my_scanf("%d",&m); 
                     for(j=0;j<m;j++){
                     my_scanf("%d",&sum);                                          
    if(((sum+3*j)>=60)&&(f)){
         f=0;
         sum=60-3*j;
         my_printf("%d\n",sum);
         }
    else if(((sum+3*j+3)>=60)&&(f)){
         f=0;      
         my_printf("%d\n",sum);
         }
         }
     if(f){
          sum=60-3*m;
         my_printf("%d\n",sum);
         }
         }     
    return 0;   
 }
#include <header.h>

int main_bench(){
    int i,e[100],n,m;
    int sz[100],k[100];
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
       my_scanf("%d",&(sz[i]));              
                     }
    for(i=0;i<n;i++){
      e[i]=sz[i];
      k[i]=sz[i];              
                    } 
     for(i=n-m;i<n;i++){
                      
      sz[i-n+m]=k[i];                   
                         } 
    for(i=0;i<m;i++){
       my_printf("%d ",sz[i]);                
                       }                                
    for(i=0;i<n-m;i++){
                       
      sz[m+i]=e[i];               
                     }
    for(i=m;i<n-1;i++){
      my_printf("%d ",sz[i]);                 
                       }                 
     my_printf("%d",sz[n-1]);                                  
      my_scanf("%d",&m);               
     return 0;              
    }
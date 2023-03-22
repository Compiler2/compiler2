#include <header.h>

int main_bench()
{
    int n,i,c=0,d=0;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
                     my_scanf("%d%d",&a[i],&b[i]);
                     }
     for(i=0;i<n;i++){
                      if(a[i]<b[i]){
                                    if(a[i]==0&&b[i]==2){
                                                   d=d+1;
                                                   }
                                    else{
                                         c=c+1;
                                         }
                                    }
                      else if(a[i]>b[i]){
                           if(b[i]==0&&a[i]==2){
                                                   c=c+1;
                                                   }
                                    else{
                                         d=d+1;
                                         }
                                         }
                      }
    
     if(c>d){my_printf("A");}
     else if(d>c){my_printf("B");}
     else{my_printf("Tie");}
    
    
    
    
    return 0;
    }
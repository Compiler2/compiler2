#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int i,a,b,j=0,m=0,k=1;
    for(i=1;i<=n;i++){
                      while(i<=n){                      
                                 my_scanf("%d %d",&a,&b);
                                 
                                 
                      if(a>=90&&a<=140&&b>=60&&b<=90){
                                                      j++;
                                                      }
                      else{
                           break;
                           }
                      i++;
                                 }
                      if(j>m){
                              m=j;
                              
                              }
                      j=0;                    
                      }
    my_printf("%d",m);
    return 0;
    }
#include <header.h>


int main_bench(){
    int n;
    my_scanf("%d",&n);
    int sz[100][2];
    double a[100];
    double e;
    int i,j;
    for(i=0;i<n;i++){
                     for(j=0;j<2;j++){
                                      my_scanf("%d",&sz[i][j]);
                                      }
                     a[i]=((1.0*sz[i][1])/sz[i][0])*100;
                     }
    for(i=1;i<n;i++){
                     if(a[i]>a[0]){
                                   e=a[i]-a[0];
                                   if(e>5)
                                   my_printf("better\n");
                                   else my_printf("same\n");
                                   }
                     else if(a[i]<a[0]){
                          e=a[0]-a[i];
                          if(e>5)
                          my_printf("worse\n");
                          else
                          my_printf("same\n");
                          }
                     }
            
   return 0;
}
                              
                              
                                    

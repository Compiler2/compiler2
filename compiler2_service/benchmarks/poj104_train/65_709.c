#include <header.h>

int main_bench()
{
   int n,i,x=0,y=0;
   int a[200],b[200];
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
       my_scanf("%d %d",&(a[i]),&(b[i]));
   }for(i=0;i<n;i++){
     if(a[i]==0&&b[i]==1){
         x=x+1;
     }else if(a[i]==1&&b[i]==2){
                  x=x+1;
              }else if(a[i]==2&&b[i]==0){
                        x=x+1;
              } 
     if(a[i]==1&&b[i]==0){
         y=y+1;
     }else if(a[i]==2&&b[i]==1){
              y=y+1;
           }else if(a[i]==0&&b[i]==2){
                    y=y+1;
     }
   }if(x>y){
       my_printf("A");
   }if(x<y){
       my_printf("B");
   }if(x==y){
       my_printf("Tie");
   }
   return 0;
   
}


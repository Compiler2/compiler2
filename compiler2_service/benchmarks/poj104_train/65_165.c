#define NUM_ITER 35376

#include <header.h>

 int main_bench(){
     int n,c=0,d=0,a,b,e=0;
     my_scanf("%d",&n);
     for(int i=0;i<n;i++){
         my_scanf("%d%d",&a,&b);
        if(a-b==-1){
            c++;
        }
        else if(a-b==2){
            c++;
        }
        else if(a-b==1){
            d++;
        }
        else if(a-b==-2){
            d++;
        }
         }
     if(c>d){
         my_printf("A");
     }
     else if(c<d){
         my_printf("B");
     }
     else {my_printf("Tie");}
     return 0;
 }
 

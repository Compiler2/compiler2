#include <header.h>

int main_bench(){
    int n,a,b,k=0,i=0;
    my_scanf("%d",&n);
    while(n--){
               my_scanf("%d%d",&a,&b);
               if(a<=140&&a>=90&&b<=90&&b>=60){
               i++;
               if(k>i){k=k;}
               if(k<=i){k=i;}
               }
               else{
                    i=0;}
                    }
       my_printf("%d",k);
 
       return 0;
       }
                    
              
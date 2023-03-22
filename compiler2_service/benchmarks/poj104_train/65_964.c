#include <header.h>

 int main_bench(){
     int A,B,Tie,n,i,a,b,r=0,m=0,k=0;
     my_scanf("%d",&n);
     for(i=0;i<n;i++){
         my_scanf("%d %d",&a,&b);
         if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
          r++;
         if(a==b)
          m++;
         if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
          k++;
     }if(r>k)
     my_printf("A");
      else if(k>r){
     my_printf("B");}
     else {my_printf("Tie");}
     return 0;
 }

#include <header.h>

int main_bench(){
    int m,n,l,z,a,b;
    a=0,b=0;
    my_scanf("%d",&l);
    for(int i=0;i<l;i++){
        my_scanf("%d %d",&m,&n);
  z=m-n;
  if(z==-1||z==2){b++;}
  else if(z==1||z==-2){a++;}
  
  
 
    }
   if(a>b){my_printf("B");}
else if(b>a){my_printf("A");}
else if(b==a){my_printf("Tie");}
   
   return 0;
   
}
    

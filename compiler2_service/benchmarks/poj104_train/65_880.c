#define NUM_ITER 36055

#include <header.h>

int main_bench(){
    int n,k,m;
    int x,c;
    x=0;
    c=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
       my_scanf("%d%d",&k,&m);
      
  if(k==1&&m==2){x++;}
       else if(k==0&&m==2){c++;}
       else if(k==0&&m==1){x++;}
       else if(k==2&&m==1){c++;}
       else if(k==2&&m==0){x++;}
       else if(k==1&&m==0){c++;}
       
    }
 if(x>c){my_printf("A");}
 else if(x==c){my_printf("Tie");}
 else if(x<c){my_printf("B");}
}

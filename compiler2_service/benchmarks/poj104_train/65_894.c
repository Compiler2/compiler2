#define NUM_ITER 36967

#include <header.h>

int main_bench(){
    int n,i,a=0,b=0,c=0,m,p,r;
    
    my_scanf("%d",&n);
  
    
    for(i=0;i<n;i++){
       my_scanf("%d%d",&m,&p);
        r=m-p;
        if(r==1||r==-2) b++;
        else if(r==0) c++;
        else if(r==-1||r==2) a++;
    }
     if(a>b) my_printf("A");
     if(a<b) my_printf("B");
     if(a==b) my_printf("Tie");
     return 0;
}



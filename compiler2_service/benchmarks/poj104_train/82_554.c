#define NUM_ITER 39380

#include <header.h>

int main_bench(){
    int n,P,p,x,i,M,m;
    M=0;
    x=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
        my_scanf("%d%d",&P,&p);
        if(P>=90&&P<=140&&p>=60&&p<=90){
                   x=x+1;    m=x;                 }                  
        else{      
                   m=x;
                   x=0;}
        if(m>M){M=m;      }
}
    my_printf("%d",M);   
    return 0;
    }

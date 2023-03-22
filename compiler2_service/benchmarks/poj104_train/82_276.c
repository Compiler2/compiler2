#define NUM_ITER 35733

#include <header.h>

int main_bench()
{
    int n,k,a,b,m,l,s;
    my_scanf("%d",&n);
    k=0;
    m=0;
    s=0;
    while(m<n){
               my_scanf("%d %d",&a,&b);
               if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90)){
                                                       k=k+1;
                                                       m=m+1;
                                                       } 
               else{
                    m=m+1;
                    if(s<k){
                            s=k;
                            }
                    k=0;
                    }
                    }
 if(s<k){
    s=k;
    }
    my_printf("%d",s);
    return 0;
    }
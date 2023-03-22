#define NUM_ITER 48494

#include <header.h>

struct N{
int a;
struct N* next;
};
int main_bench(){
	int *p,*q,n,a[100],x;
 my_scanf("%d",&n);
 for(p=a;p<a+n;p++){
                    my_scanf("%d",p);}
                    for(p=a,q=a+n-1;p<a+n/2;p++,q--){
                                         x=*p;
                                         *p=*q;
                                         *q=x;
                                         }
 for(p=a;p<a+n;p++){
                    if(p==a){my_printf("%d",*p);}
                    
                    else{my_printf(" %d",*p);}
                    }
 my_scanf("%d",&n);
 return 0;
}
 
                                  

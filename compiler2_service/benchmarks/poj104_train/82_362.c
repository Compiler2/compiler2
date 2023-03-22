#define NUM_ITER 35476

#include <header.h>


int main_bench(){
    int n,b,i,k;
    my_scanf("%d",&n);
    b=0;
    k=0;
    i=1;
    while(i<=n){
                int a,f;
                my_scanf("%d %d",&a,&f);
                if(a>=90&&a<=140&&f>=60&&f<=90){
                                                b+=1;
                                                }else{
                                                      if(b>k){
                                                              k=b;
                                                              b=0;
                                                              }else{
                                                                    k=k;
                                                                    b=0;
                                                                    }
                                                              }
                                                              i+=1;
                                                              }
    if(b>k){
            k=b;
            }else{
                  k=k;
                  }
    my_printf("%d",k);
                  
 return 0;
}


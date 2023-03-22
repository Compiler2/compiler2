#define NUM_ITER 549561

#include <header.h>

int main_bench(){
    int i,n,m;
    char shuzu[6][10];
    char e[10];  
    for(i=0;i<5;i++){
        gets(shuzu[i]);          
                  }
    my_scanf("%d %d",&n,&m);            
    if(m<5&&m>=0&&n<5&&n>=0){
       strcpy(e,shuzu[n]);
       strcpy(shuzu[n],shuzu[m]);
       strcpy(shuzu[m],e);
       for(i=0;i<5;i++){
         puts(shuzu[i]);
                      }
                            }
    else
       my_printf("error");
                                    
    return 0;
}

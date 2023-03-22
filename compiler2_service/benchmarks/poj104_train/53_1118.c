#define NUM_ITER 8112

#include <header.h>

int main_bench(){
    int n,a[300],i,k;
    char b=',';
    my_scanf("%d",&n);
    for(i=0;i<n;i++){my_scanf("%d ",&a[i]);}
    my_printf("%d",a[0]);
    for(i=1;i<n;i++){
                     for(k=0;k<i;k++){
                                      if(a[k]==a[i]) break;}
                     if(k==i){my_printf("%c%d",b,a[i]);}
                     }
    return 0; 
}
    
                     

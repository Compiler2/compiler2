#define NUM_ITER 44433

#include <header.h>

int main_bench(){
    int u[200],i,n,a[200];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
    if(i==n-1){
               my_scanf("%d",&(u[i]));
               break;
               }
    my_scanf("%d ",&(u[i]));  
}
for(i=0;i<n;i++){
a[n-1-i]=u[i];
}
for(i=0;i<n;i++){
       if(i==n-1){
               my_printf("%d",a[i]);
               break;
               }
    my_printf("%d ",a[i]);  
} 

return 0;
}          

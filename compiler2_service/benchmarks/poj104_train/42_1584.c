#include <header.h>

int main_bench(){
    int n,k,i,j=0;
    my_scanf("%d",&n);
    int*a=(int*)malloc(sizeof(int)*n);
    int*b=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&a[i]);                 
    }
    my_scanf("%d",&k);
    for(i=0;i<n;i++){
                     if(a[i]!=k){
                                 b[j]=a[i];
                                 j++;            
                     }                 
    }
    for(i=0;i<j-1;i++){
                       my_printf("%d ",b[i]);                   
    }
    my_printf("%d",b[j-1]);
    free(b);
    free(a);
    return 0;
}
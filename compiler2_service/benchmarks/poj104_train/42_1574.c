#define NUM_ITER 43161

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
       my_scanf("%d",&a[i]);
       }
    int k;
    my_scanf("%d",&k);
    int s=0;
    if(a[n-1]==k){
       a[n-1]=k+1;
       s=s+1;
       }
       
    for(int j=0;j<n;j++){
        if(a[j]==k){
           int p=j;
           while(p<n-1){
                a[p]=a[p+1];
                p++;
                }
           s=s+1;
           j=j-1;        
           }
        }
        
    for(int q=0;q<n-s;q++){
        
        if(q==0){
           my_printf("%d",a[q]);  
        }else{
           my_printf(" %d",a[q]);   
        }
    }
    return 0;
}

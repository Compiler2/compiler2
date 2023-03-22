#define NUM_ITER 7947

#include <header.h>

int main_bench(){
 int n,i,j,k=1,a[20001],b[20001],f;
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
     my_scanf("%d",&a[i]);
     if(i==0) b[0]=a[0];
     f=0;
     for(j=0;j<i;j++){
            if(a[i]==a[j]) break;
            else f++;
            
         
            }
     if(f==i){ 
     b[k]=a[i];k++;  
    } 
        } 
    
    for(i=1;i<k-1;i++){
        my_printf("%d ",b[i]);
        }
    my_printf("%d",b[k-1]);
    my_scanf("%d",&n);
    return 0;
    }

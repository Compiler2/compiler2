#define NUM_ITER 45200

#include <header.h>

int main_bench(){
    int n,k,a[100000],i,j=0;
    my_scanf("%d",&n);    
    for(i=0;i<n;i++) my_scanf("%d",&a[i]);
    my_scanf("%d",&k);
    
    for(i=0;i<n;i++){
        if(a[i]!=k){
            a[j]=a[i];
            j++;            
            }
        }
    for(i=0;i<j-1;i++) my_printf("%d ",a[i]);
    my_printf("%d",a[j-1]);
    
	my_scanf("%d",&n);
	return 0;
}

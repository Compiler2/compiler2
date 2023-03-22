#define NUM_ITER 54508

#include <header.h>

int main_bench(){
    int n,k,i,a[10000],right=0;
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
                     my_scanf("%d",&a[i]);
    }
    int j;
    for(i=0;i<n-1;i++){
                       for(j=i+1;j<=n;j++){
                                           if(a[i]+a[j]==k){
                                                            right=k;
                                                            break;
                                           }                
                       }
                       if(right==k){
                                    my_printf("yes");
                                    break;
                       }else if(i==n-2&&right!=k){
							my_printf("no");
                       }
    }
    return 0;
}

#define NUM_ITER 18855

#include <header.h>

int main_bench()
{
    int N,number[500],i,k,min,odd[500],n,e;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&number[i]);
    }
    k=0;
    for(i=0;i<n;i++){
        if(number[i]%2==1){
            odd[k]=number[i];
            k++;
        }
    }
    n=k;
    for(i=0;i<n;i++){
        min=i;
        for(k=i+1;k<n;k++){
            if(odd[min]>odd[k]){
                min=k;
            }
        }
        e=odd[min];
        odd[min]=odd[i];
        odd[i]=e;
    }
    for(i=0;i<n-1;i++){
        my_printf("%d,",odd[i]);
    }
    my_printf("%d",odd[n-1]);
    return 0;
}

#define NUM_ITER 6270

#include <header.h>

int main_bench(){
    int n,number[300],i,j;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&number[i]);
                     }
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){
                                        if(number[i]==number[j])
                                        number[j]=-3;
                                        }
                     }
    my_printf("%d",number[0]);
    for(i=1;i<n;i++){
                     if(number[i]>-1)
                     my_printf(",%d",number[i]);
                     }
    return 0;
}
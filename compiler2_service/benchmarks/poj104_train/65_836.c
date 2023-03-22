#define NUM_ITER 36740

#include <header.h>

int main_bench(){
    int k,i=0,j=0,a,b,n;
    my_scanf("%d",&n);
    for(k=0;k<n;k++){
        my_scanf("%d %d",&a,&b);
        if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))i++;
        if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2))j++;
    }
    
    if(i>j)my_printf("A");
    else if(j>i)my_printf("B");
    else if(i==j)my_printf("Tie");
    return 0;
}


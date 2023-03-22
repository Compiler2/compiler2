#include <header.h>


int main_bench(){
    int a[100000],*p,i,j,n,k,sum;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a[i]);
    }
    my_scanf("%d",&k);
    sum=n;
    p=a;
    for(i=0;i<sum;i++){
        if(a[i]==k){
            
            for(j=i;j<sum;j++){
                *(p+j)=*(p+j+1);

            }
i=i-1;
            sum=sum-1;
        }
    }
    p=a;
    for(i=0;i<sum;i++){
        my_printf("%d",*(p+i));
        if(i!=sum-1) my_printf(" ");
    }
    my_printf("\n");
}

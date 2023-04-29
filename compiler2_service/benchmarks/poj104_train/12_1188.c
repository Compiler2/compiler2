#define NUM_ITER 1969778

#include <header.h>


int main_bench()
{
    int i,j,t,a[16]={0},sum=0,k=0;
    while(my_scanf("%d",&a[0]) && a[0]!=-1){
    for(i=1;i<=16;i++){
        my_scanf("%d",&a[i]);
        if(a[i]!=0) sum++;
        else break;
    }
    for(i=0;i<=sum;i++){
        for(j=i+1;j<=sum;j++){
            if(a[i]==2*a[j] || a[j]==a[i]*2) k++;
        }
    }
    my_printf("%d\n",k);
    sum=0;
    k=0;
    }
    return 0;
}
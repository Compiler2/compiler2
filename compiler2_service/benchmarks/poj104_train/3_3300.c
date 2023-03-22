#include <header.h>

int main_bench()
{
    int n,k,i,j;
    int s=0;
    my_scanf("%d %d",&n,&k);
    int*pi=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        my_scanf("%d ",pi+i);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(pi+i)+*(pi+j)==k){
               s=s+1;
            }
        }
    }
    if(s==0){
        my_printf("no");
    }
    else{
        my_printf("yes");
    }
    free(pi);
    return 0;
}

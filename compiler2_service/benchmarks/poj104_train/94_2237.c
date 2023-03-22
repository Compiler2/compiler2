#define NUM_ITER 15632

#include <header.h>

int main_bench()
{
    int n,a,b,j,r,i;
    int sz[500];
    a=0;
    int num[500];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
        my_scanf(" %d ",&sz[i]);
        if(sz[i]%2!=0){
            num[a]=sz[i];
            a++;
        }
    }
    for(j=a;j>0;j--){
        for(r=0;r<j;r++){
            if(num[r]>num[r+1]){
                int tmp;
                tmp=num[r+1];
                num[r+1]=num[r];
                num[r]=tmp;
            }
        }
    }
    my_printf("%d",num[1]);
        for(int i=2;i<a+1;i++){
            my_printf(",%d",num[i]);
        }
    return 0;
}
#define NUM_ITER 15437

#include <header.h>

int sushu(int x);
int main_bench()
{
    int i=2,n,flag=0;
    my_scanf("%d",&n);
    for(i;i<=n;i++){
        if(sushu(i)&&sushu(i+2)&&i+2<=n){flag=1;my_printf("%d %d\n",i,i+2);}
}
	if(flag==0){my_printf("empty\n");}
    return 0;
}
    int sushu(int x){
        for(int p=2;p<x;p++){
            if(x%p==0){return 0;}
}
        return 1;
}

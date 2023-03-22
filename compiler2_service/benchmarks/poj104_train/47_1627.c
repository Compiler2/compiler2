#define NUM_ITER 58269

#include <header.h>

int main_bench(){
int n,k;
int i;
int sz[100];
my_scanf("%d",&n);
i=0;
k=n-1;
while(i<n){
my_scanf("%d",&sz[i]);
i++;
}
while(k>=0){
    if(k!=0){
    my_printf("%d ",sz[k]);}
    else{my_printf("%d",sz[k]);}
    k--;
}
return 0;
}

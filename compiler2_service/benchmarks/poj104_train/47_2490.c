#define NUM_ITER 49601

#include <header.h>

int main_bench()
{
int n,i,j,t;
int sz[100];
my_scanf("%d",&n);
for(i=0;i<n-1;i++){
my_scanf("%d ",&sz[i]);
}
my_scanf("%d",&sz[n-1]);
for(i=0,j=n-1;i<j;i++,j--){
t=sz[j];
sz[j]=sz[i];
sz[i]=t;
}
for(i=0;i<n-1;i++){
my_printf("%d ",sz[i]);
}
my_printf("%d",sz[n-1]);
return 0;
}
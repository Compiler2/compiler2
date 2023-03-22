#include <header.h>

int main_bench(){
int m,n,i;
my_scanf("%d %d\n",&n,&m);
int sz[10000];
for(i=0;i<n;i++){
my_scanf("%d ",&sz[i]);}
for(i=n;i<n+n-m;i++){
sz[i]=sz[i-n];}
for(i=n-m;i<n+n-m-1;i++){
my_printf("%d ",sz[i]);}
my_printf("%d",sz[n+n-m-1]);
return 0;}


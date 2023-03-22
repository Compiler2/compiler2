#include <header.h>

int main_bench(){
int x,y,n,k,i=0,m=0;
int sz[100000];
my_scanf("%d%d\n",&n,&k);
for(i=0;i<=n-1;i++){
my_scanf("%d",&sz[i]);}
for(i=0;i<=n-2;i++){
for(x=i;x<=n-2;x++){
y=sz[i]+sz[x+1];
if(y==k){
m++;}
}}
if(m!=0){
my_printf("yes");
}
else if(m==0){
    my_printf("no");
}
return 0;
}
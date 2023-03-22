#define NUM_ITER 6078

#include <header.h>

int main_bench(){
int j,i,n,k,s=0;
my_scanf("%d %d\n",&n,&k);
int sz[n];
for(i=0;i<=n-1;i++){
my_scanf("%d",&sz[i]);
for(j=0;j<=i;j++){
if(sz[i]+sz[j]==k){
s++;}}}
if(s>0){my_printf("yes");}
else{my_printf("no");}
return 0;
}  
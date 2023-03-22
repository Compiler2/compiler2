#include <header.h>

int main_bench() {
int n,k,i,j,sz[1000],sum;
my_scanf("%d%d",&n,&k);
for(i=0;i<n-1;i++)
my_scanf("%d",&sz[i]);
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
    	sum=sz[i]+sz[j];
if(k==sum){
my_printf("yes");
break;
}
}
if(k==sum)
break;
if(i==(n-1)&&(sz[i-1]+sz[i])!=k)
my_printf("no");
}
return 0;
}
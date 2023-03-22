#define NUM_ITER 32

#include <header.h>

int main_bench(){
int k,m,n,ans,i,j,x;
my_scanf("%d",&k);
while (k--){
my_scanf("%d%d",&n,&m);ans=0;
for (i=1;i<=n;i++){
if(i==1||i==n)
for (j=1;j<=m;j++) {my_scanf("%d",&x);ans+=x;}
else
for (j=1;j<=m;j++) {my_scanf("%d",&x);if(j==1||j==m) ans+=x;}
}
my_printf("%d\n",ans);
}
return 0;
}
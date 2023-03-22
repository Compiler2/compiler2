#define NUM_ITER 688

#include <header.h>

int main_bench()
{
int i,j,n,k,a=0,b=0,c=0,d=0;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++) {
my_scanf("%d",&k);
if(!a&&!k) {a=i;b=j;}
if(!k) {c=i;d=j;}
}
my_printf("%d",(c-a-1)*(d-b-1));
}
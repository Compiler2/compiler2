#define NUM_ITER 49627

#include <header.h>

int main_bench()
{
int n,i,k,m;
int sz[100];
my_scanf("%d",&n);
m=n/2;
for(i=0;i<n;i++)
my_scanf("%d",&sz[i]);
for(i=0;i<m;i++){
k=sz[i];
sz[i]=sz[n-i-1];
sz[n-i-1]=k;}
for(i=0;i<n;i++) 
    if (i<n-1)
    my_printf("%d ",sz[i]);
   else  my_printf("%d",sz[i]);

return 0;
}          


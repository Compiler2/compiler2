#define NUM_ITER 362488

#include <header.h>

int main_bench(){int i,j,k,z,a[1000];
my_scanf("%d%d",&i,&k);my_scanf("%d",&a[0]);a[0]=k-a[0];
for(j=1;j<=i-1;j++){my_scanf("%d",&a[j]);for(z=0;z<=j-1;z++){if(a[j]==a[z]){my_printf("yes");return 0;}}a[j]=k-a[j];}
my_printf("no");
return 0;}
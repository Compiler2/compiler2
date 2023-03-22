#define NUM_ITER 7249

#include <header.h>

int main_bench()
{
int n,k,i,sz[1000],e,l,b=0;
my_scanf("%d%d",&n,&k);
for(i=0;i<=(n-1);i++){my_scanf("%d",&sz[i]);}
for(e=0;e<=(n-2);e++){
for(l=(e+1);l<=(n-1);l++)
{if(k==sz[e]+sz[l]){b=1;break;}}}
if(b==0){my_printf("no");}
if(b==1){my_printf("yes");}
return 0;
}

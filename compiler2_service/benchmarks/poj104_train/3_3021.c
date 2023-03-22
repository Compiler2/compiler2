#define NUM_ITER 57165

#include <header.h>

int main_bench()
{
int n,k,a,b,c;
my_scanf("%d%d",&n,&k);
int sz[n];
for(int i=0;i<n;i++){
my_scanf("%d",&(sz[i]));
}
for(a=0;a<n;a++){
for(b=a+1;b<n;b++){
c=sz[a]+sz[b];
if(c==k)
break;
}
if(b!=n){
my_printf("yes");
break;
}
}
if(a==n)
my_printf("no");
return 0;
}

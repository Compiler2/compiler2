#define NUM_ITER 48794

#include <header.h>

int main_bench(){
int ss[1000];
int zz[1000];
int n,k,num,i;
my_scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
my_scanf("%d",&num);
ss[i]=num;zz[i]=num;
}
int sz[1000][1000];
int h,l;
for(h=0;h<n;h++){
for(l=0;l<n;l++){
sz[h][l]=ss[h]+zz[l];
if(sz[h][l]==k&&h!=l)
{my_printf("yes");break;}
else if(h==n-1&&l==n-1)
{my_printf("no");break;}
}

if(sz[h][l]==k&&h!=l)
{break;}

else if(h==n-1&&l==n-1)
{break;}
}
return 0;
}
#define NUM_ITER 273

#include <header.h>

int yos(int n,int m)
{int a[1000],i,j,x=0,y;
for(i=1;i<=n;i++)a[i]=1;
for(i=1;i<n;i++){
for(j=1;j<=m;j++)do
{x++;if(x>n)x=1;}
while (!a[x]);
a[x]=0;}
for(i=1;i<=n;i++)
if(a[i])return(i);}
main_bench(){
int m,n;
my_scanf("%d%d",&n,&m);
while (m!=0){
my_printf("%d\n",yos(n,m));
my_scanf("%d%d",&n,&m);}}
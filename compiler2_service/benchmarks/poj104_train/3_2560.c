#define NUM_ITER 4941

#include <header.h>

main_bench()
{
int i,j,k,m,n;
int p=0;
my_scanf("%d %d",&m,&n);
int a[1000];
int b[1000][1000];
for(i=1;i<=m;i++)
my_scanf("%d",&a[i]);
for(i=1;i<=m;i++)
for(j=i+1;j<=m;j++)
b[i][j]=a[i]+a[j];
for(i=1;i<=m;i++)
{if(p==1)
break;
for(j=1;j<=m;j++)
{if(b[i][j]==n)
{p=1;break;}
}
}
if(p==1)
my_printf("yes");
else
my_printf("no");
}
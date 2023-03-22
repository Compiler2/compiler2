#define NUM_ITER 1091

#include <header.h>

int main_bench()
{
int n,m,i,j,a[1000],time=0,s=0,temp;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{
 my_scanf("%d",&m);
 for(j=0;j<=100;j++) a[j]=0;
 for(j=1;j<=m;j++)
 {
  my_scanf("%d",&temp);
  a[temp]=1;
 }          
 for(j=1;j<=100;j++)
 {
  time++;s++;
  if(a[j]==1) time+=3;
  if(time>=60) break;
 }
 my_printf("%d\n",s);
 s=0;time=0;
}
my_scanf("%d",&n);
return 0;
}

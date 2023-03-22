#define NUM_ITER 1318

#include <header.h>

main_bench()
{
int n,i,j,m;
static int x[100];
my_scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  my_scanf("%d",&m);
  for(j=1;j<=m;j++)
     my_scanf("%d",&x[j]);
  for(j=m; ;j--)
    {if((x[j]+j*3)<=60)
       {my_printf("%d\n",60-j*3);
        break;}
     if((x[j]+j*3)>60&&(x[j]+(j-1)*3)<=60)
       {my_printf("%d\n",x[j]);
        break;} }
 }
}

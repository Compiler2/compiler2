#define NUM_ITER 9783

#include <header.h>

int su(int p)
 {
 int i,j,w;
 w=1;
 for (i=2;i<p;i++)
  if (p%i==0) w=0;
  if (w==1) return(1);
   else return(0);
   }
main_bench()
{
int m,i,j,k;
my_scanf("%d",&m);
for (i=3;i<m/2+1;i++)
 if ((su(i)==1)&&(su(m-i)==1)) my_printf("%d %d\n",i,m-i);
 }
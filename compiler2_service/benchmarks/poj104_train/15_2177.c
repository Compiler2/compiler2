#define NUM_ITER 645

#include <header.h>

int abs(int p)
{
  if(p>0) return p;
  else return(-p);
}
int main_bench()
{
  long first,last,i,j;
  int n,a,check=0,sc,sr,ec,er;
  my_scanf("%d",&n);
  for(i=0;i<n*n;i++)
  {
    my_scanf("%d",&a);
    if((a==0)&&(check==0)) {first=i;check=1;}
    if(a==0) last=i;
  }
  sc=(first/n);
  sr=(first%n);
  ec=(last/n);
  er=(last%n);
  my_printf("%d",(abs(sc-ec)-1)*(abs(sr-er)-1));
  return 0;
}
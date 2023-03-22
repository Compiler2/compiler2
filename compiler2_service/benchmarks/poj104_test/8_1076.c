#include <header.h>

int n,m;
int *pfCompare(const void *a, const void *b)
{
   return *(int*)a-*(int*)b;
}
int shuru(int x,int y)
{
int k;
my_scanf("%d",&x);
my_scanf("%d",&y);
int*p=(int*)malloc(x*sizeof(int));
for(k=0;k<=x-1;k++)
my_scanf("%d",&p[k]);
int*q=(int*)malloc(y*sizeof(int));
for(k=0;k<=y-1;k++)
my_scanf("%d",&q[k]);
qsort(p,x,sizeof(int),pfCompare);
qsort(q,y,sizeof(int),pfCompare);
int*c=(int*)malloc((x+y)*sizeof(int));
  for (k=0;k<=x-1;k++)
  c[k]=p[k];
  for (k=0;k<=y-1;k++)
  c[x+k]=q[k];
  for(k=0;k<=x+y-2;k++)
  my_printf("%d ",c[k]);
  my_printf("%d",c[x+y-1]);
}

int main_bench()
{      
shuru(n,m);
}
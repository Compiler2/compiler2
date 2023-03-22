#define NUM_ITER 2818

#include <header.h>

int n1,n2,a1[200],a2[200],i,j,t;
void toscan()
{
  my_scanf("%d%d",&n1,&n2);
  for(i=0;i<n1;i++)
    my_scanf("%d",&a1[i]);
  for(i=0;i<n2;i++)
    my_scanf("%d",&a2[i]);
}

void paixu()
{
  for(i=1;i<n1;i++)
    for(j=0;j<i;j++)
      if(a1[j]>a1[i])
        { t=a1[i];
          a1[i]=a1[j];
          a1[j]=t;
        }
  for(i=1;i<n2;i++)
    for(j=0;j<i;j++)
      if(a2[j]>a2[i])
        { t=a2[i];
          a2[i]=a2[j];
          a2[j]=t;
        }
}

void hebing()
{
    for(i=0;i<n2;i++)
        a1[i+n1]=a2[i];
}

void toprint()
{
    my_printf("%d",a1[0]);
    for(i=1;i<n1+n2;i++)
        my_printf(" %d",a1[i]);
}

main_bench()
{
  toscan();
  paixu();
  hebing();
  toprint();
  
}
#define NUM_ITER 5119

#include <header.h>

int main_bench()
{
  int n,m,i,j,k,g,t,v=0;
  int a[555],b[555];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  my_scanf("%d",&a[i]);
  if(a[i]%2!=0)
   b[i]=a[i];
  else 
   b[i]=0;
  }
  for(j=0;j<n;j++)
  {t=0;
  for(k=n-1;k>j;k--)
  {
  if(b[k]>b[k-1])
  { t=b[k-1];
  b[k-1]=b[k];
  b[k]=t;}
  }

  }
 for(g=n;g>=0;g--)
 {
 if(b[g]>0)
 {if(v==1)
 { my_printf(",");}
   my_printf("%d",b[g]);v=1;
 
 }
 }
 return 0;
 }

#define NUM_ITER 9764

#include <header.h>

int main_bench()
{
  char a[100],b[100],c[100],f[100],e[100];
  int i,m,k,n;
  int d[100];
  my_scanf("%d",&n);
  while(n>0)
  {
  my_scanf("%s",a);
  m=strlen(a);
  my_scanf("%s",b);
  k=strlen(b);
  for(i=0;i<m;i++)
  f[i]=a[m-1-i];
  
  for(i=0;i<k;i++)
  e[i]=b[k-1-i];
  for(i=k;i<m;i++)
  e[i]='0';
  for(i=0;i<m;i++)
  d[i]=f[i]-e[i];
  for(i=0;i<m;i++)
  if(d[i]<0)
  {
  d[i]=d[i]+10;
  d[i+1]=d[i+1]-1;}
  for(i=0;i<m;i++)
  c[i]=d[i]+'0';
  
  
  
  int num=0;
  for(i=m-1;i>=0;i--)
  {if(num)
  {my_printf("%c",c[i]);continue;}
   if(c[i]!='0')
  {my_printf("%c",c[i]);
  num=1;}
  }
  my_printf("\n");
  n--;
}
  
  return 0;
}

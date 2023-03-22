#include <header.h>

int main_bench()
{
  int n,i,p,q,t,j;
  my_scanf("%d",&n);
   my_scanf("\n");
  char a[100],b[100],c[100];
  for(i=0;i<=99;i++)
{
a[i]='\0';
}
 for(i=0;i<=99;i++)
{
b[i]='\0';
}
  for(i=1;i<=n;i++)
  {
    gets(a);
    gets(b);
    my_scanf("\n");
    p=strlen(a);
    q=strlen(b);
    for(t=1;t<=q;t++)
     {
      if(a[p-t]>=b[q-t])
      c[p-t]=a[p-t]-b[q-t]+48;
      else
    {
      c[p-t]=a[p-t]+58-b[q-t];
      a[p-t-1]=a[p-t-1]-1;
     }
     }
     for(t=0;t<=p-q-1;t++)
     {
      c[t]=a[t];
      }
    for(j=0;j<=p-1;j++)
     {
       my_printf("%c",c[j]);
     }
my_printf("\n");
  }
return 0;
}

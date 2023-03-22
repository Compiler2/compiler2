#include <header.h>

int main_bench()
{
  int a[300],m1,m2,i,j,m0;
  char c;
  j=0;
  for(i=0;i<300;i++)
   {my_scanf("%d",&a[i]);
    my_scanf("%c",&c);
    j=j+1;
    if(c!=',') i=300;
   }
  m1=a[0];
  m2=-1;
  for(i=1;i<j;i++)
     {if(m2<a[i]&&a[i]<m1)
       m2=a[i];
      else if(a[i]>m1)
      {m0=m1;
       m1=a[i];
       m2=m0;
      }
     }
  if(m2==-1) my_printf("No");
  else my_printf("%d",m2);
}
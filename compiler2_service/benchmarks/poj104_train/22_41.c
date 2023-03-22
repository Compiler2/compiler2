#include <header.h>

int main_bench()
{int a[301]={0},i,k,n,m;
 char c;
 i=0;
 my_scanf("%d",&a[0]);
 for(i=1;;i++)
 {my_scanf("%c",&c);
  if(c=='\n')
	  break;
  else
   my_scanf("%d",&a[i]);
 }
 k=a[0];
 n=i;

    for(i=0;i<n;i++)
      {if(a[i]>k)
        k=a[i];
       }
 m=0;
    for(i=0;i<n;i++)
      {if(a[i]>m&&a[i]<k)
        m=a[i];
       }
if(m!=0)
  my_printf("%d",m);
else
 my_printf("No");
}

 
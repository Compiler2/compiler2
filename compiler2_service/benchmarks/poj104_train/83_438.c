#define NUM_ITER 19919

#include <header.h>

int main_bench()
{int n,a[100],b[100],i,j,s=0;
 float g,G=0.0,GPA,c[111];
 my_scanf("%d\n",&n);
 for(i=1;i<=n;i++)
  my_scanf("%d ",&a[i]);
 my_printf("\n");
 for(j=1;j<=n;j++)
  my_scanf("%d ",&b[j]);
 my_printf("\n");
 for(i=1;i<=n;i++)
  s=s+a[i];
 for(j=1;j<=n;j++)
  {if(b[j]>=90) g=4.0;
   else if(b[j]>=85) g=3.7;
   else if(b[j]>=82) g=3.3;
   else if(b[j]>=78) g=3.0;
   else if(b[j]>=75) g=2.7;
   else if(b[j]>=72) g=2.3;
   else if(b[j]>=68) g=2.0;
   else if(b[j]>=64) g=1.5;
   else if(b[j]>=60) g=1.0;
   else  g=0.0;
   c[j]=g*a[j];}
 for(j=1;j<=n;j++)
  G=G+c[j];
 GPA=G/s;
 my_printf("%.2f",GPA);
}

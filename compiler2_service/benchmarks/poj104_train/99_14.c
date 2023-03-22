#include <header.h>

int main_bench()
{
int i,n,m;
double a,b,c,d;
my_scanf("%d",&n);
a=b=c=d=0;
for(i=0;i<n;i++)
{ 
  my_scanf("%d",&m);
  if(m<19)a+=1;
  else if(18<m&&m<36)b+=1;
  else if(36<=m&&m<=60)c+=1;
  else if(m>=61)d+=1;}
a=100*a/n;b=100*b/n;c=100*c/n;d=100*d/n;
my_printf("1-18: ");my_printf("%.2lf%%\n",a);
my_printf("19-35: ");my_printf("%.2lf%%\n",b);
my_printf("36-60: ");my_printf("%.2lf%%\n",c);
my_printf("60??: ");my_printf("%.2lf%%\n",d);
}
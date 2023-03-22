#include <header.h>

int main_bench()
{int n,i,j,k,l,max=-1,min=999,p=0; double nn=0,s=0,xx;
int a[10];
  my_scanf("%d",&n);
  for (i=1;i<=n;i++) 
  {my_scanf("%d",&a[i]); s+=a[i];} 
	for (i=1;i<=n;i++)   
	{
		  my_scanf("%d",&k);
		  if (90<=k) xx=4.0;
		   else if (85<=k) xx=3.7;
		      else if (82<=k) xx=3.3;
   else if (78<=k) xx=3.0;
   else if (75<=k) xx=2.7;
   else if (72<=k) xx=2.3;
   else if (68<=k) xx=2.0;
   else if (64<=k) xx=1.5;
   else if (60<=k) xx=1.0;
   else xx=0;
   nn+=xx*a[i];
	}

  my_printf("%.2lf",nn/s);
  return 0;
}
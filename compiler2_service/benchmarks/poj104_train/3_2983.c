#include <header.h>

int main_bench()
{
   int a[1001],k,n,j,i,check;
   my_scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
   check=0;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
	  {
	      if((a[i]+a[j]==k)&&(a[i]!=a[j]))
		  {
			  check=1;
			  break;}

	  }
    if(check==1)break;
   }
	if(check==0)
	{
	     my_printf("no\n");

	}
	else
	{my_printf("yes\n");}
}
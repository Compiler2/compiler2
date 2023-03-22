#define NUM_ITER 1253992

#include <header.h>

int main_bench()
{
	int a[300]={0};
  char b[300];
  int max1;
  int max2;
  int i;
  int m=0;
  int n;
  for (i=0;i<300;i++)
  {
	  my_scanf("%d%c",&a[i],&b[i]);
	  if (b[i]!=',')
		  break;
	  
  }
  n=i;
  for (i=0;i<n-1;i++)
  {
	  if (a[i]!=a[i+1])
		  m=m+1;
  }
  if (m==0)
	  my_printf("No");
  else

 if (n==0)
	 my_printf("No");
 else
 {max1=a[0];
 max2=0;
 for(i=0;i<300;i++)
 {
	 if (a[i]>max1)
	 {   max2=max1;
		 max1=a[i];
	 
	 }
	
	 else if (a[i]>max2&&a[i]<max1)
		 max2=a[i];
 }

if (max1==max2)
my_printf("No");
else 
my_printf("%d",max2);}
return 0;
}
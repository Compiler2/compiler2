#include <header.h>

int main_bench()
{
  int a[32767],i,n;
  for(i=1;i<=32767;i++)
	  a[i]=0;
  my_scanf("%d\n",&n);
  n--;
  my_scanf("%d",&i); 
  a[i]=1;
  my_printf("%d",i);
  while(n>0)
  { 
     my_scanf("%d",&i);
	 if(a[i]==0)
	 {
        a[i]=1;
		my_printf(",%d",i);
	 }
     n--;
  }
}
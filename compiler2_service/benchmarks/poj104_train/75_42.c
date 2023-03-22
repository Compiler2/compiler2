#include <header.h>

int main_bench()
{
	int a[1000],b[1000],c[1000]={0};
	int i=1,j=1,n;
     my_scanf("%d",&a[0]);
	 while(my_scanf(",%d",&a[i]))
	 {i++;}
	 my_scanf("%d",&b[0]);
	 while(my_scanf(",%d",&b[j]))
	 j++;
      n=j;
	  for(i=0;i<1000;i++)
	  {
		  for(j=0;j<n;j++)
		  {
			  if(a[j]<=i && b[j]>i)
		      c[i]++;
		  }
	  }
	  j=0;
	  for(i=0;i<1000;i++)
	  {
		  if(c[i]>c[j])
	       j=i;
	  }
    

	  my_printf("%d %d",n,c[j]);
  return 0;
}
#define NUM_ITER 4536

#include <header.h>

int main_bench()
{
  int i,j,k,n,a[1000],b[1000][1000],c=0,d=0;
  my_scanf("%d",&n);
  my_scanf("%d",&k);
  for(i=0;i<n;i++)
  {
	  my_scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
	  for(j=i+1;j<n;j++)
	  {
		  b[i][j]=a[i]+a[j];
	  }
  }
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
           if(b[i][j]==k)
		  {
			  c++;
			 
                            
		  }
		  else
          { 
			 d++;
		
		  }
	  }
	}
if(c>0)
{
	my_printf("yes");
}

		else
	{
			my_printf("no");

  }
  return 0;
}
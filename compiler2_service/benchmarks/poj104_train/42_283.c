#include <header.h>

int main_bench()
{
int n,i,m,k; 
int a[100000];
my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   my_scanf("%d",&a[i]);
  }
  my_scanf("%d",&m);

  for(i=n-1;i>=0;i--)
   {
     if(a[i]==m)
	 {
		 for(k=i;k<n;k++) 
			{
			a[k]=a[k+1];
			
			} 
		n=n-1;
	 }
         
	}
	 
  for(i=0;i<n;i++)
  {
	  if(i<n-1)

           my_printf("%d ",a[i]);
	else my_printf("%d",a[i]);
 
    } 

  return 0;
  
}

#include <header.h>

int main_bench()
{
   int i,n,j,k,a[100000];
   int num[100000];
   my_scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
       my_scanf("%d ",&num[i]);
   }
    my_scanf("%d",&k);
   for(i=0;i<n;)
   {
	   if(num[i]==k)
	   {  
		   for(j=i;j<n-1;j++){num[j]=num[j+1];}
		   n--;
	   }else i++;
   }
   for(i=0;i<n-1;i++)
   {
	   my_printf("%d ",num[i]);
   }
   my_printf("%d",num[n-1]);
}
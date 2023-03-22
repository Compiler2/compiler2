#define NUM_ITER 1636322

#include <header.h>

int main_bench()
{
	int i,n,a[300],c[300],max=0,j=0;
	char b[300];
	for(i=0;;i++)
	{
	  my_scanf("%d%c",&a[i],&b[i]);
	  if(b[i]!=',') break;
	}
	n=i+1;
	if(n==1)   my_printf("No");
	else
	{
	   for(i=0;i<n;i++)	
	   {
	   	  if(a[i]>max)  max=a[i];
	   }
	   for(i=0;i<n;i++)
	   {
	   	if(a[i]<max)   {c[j]=a[i];j++;}
	   }
	   if(j==0)   my_printf("No");
	   else 
	   {
	   	max=0;
	   	for(i=0;i<j;i++)
	   	{
	   		if(c[i]>max)    max=c[i];
	   	}
	   	my_printf("%d",max);
	   }
	} 
	return 0;
}
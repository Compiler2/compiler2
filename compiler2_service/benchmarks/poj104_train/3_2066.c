#include <header.h>

int main_bench()
{
   int n,i,j,k,m,a[1000];
   my_scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
		my_scanf("%d",&a[i]); 
	} 
	for(i=0;i<n;i++)
	{
		m=k-a[i];
		for(j=0;j<n;j++)
		{
			if(j==i)
			{continue;}
			if(a[j]==m){ 
			my_printf("yes");
			break;
			} 
		}
		 if(a[j]==m)
		 break; 
	}
	if(i==n&&j==n)
	my_printf("no"); 
	my_scanf("%d",&n); 
	return 0; 

} 
#include <header.h>


int main_bench()
{
	int i,n,k,j,a[1000],tempx,tempy,temp=0;
	my_scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
		my_scanf("%d",&a[i]);
		}
	
    for(i=0;i<n;i++)
	{   
		tempx=a[i];
		for(j=i+1;j<n;j++)
		{
			tempy=a[j];
			if(tempx+tempy==k)
			{
				temp++;
				
			}
		}
	}
   if(temp>=1)
   my_printf("yes");
   if(temp==0)
   my_printf("no");
   return 0;
}
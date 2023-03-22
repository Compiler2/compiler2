#include <header.h>

int main_bench()
{
	int i,n,j,k[101],l,max,sec=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	   {
		my_scanf("%d",&k[i]);
	
	   } 
	   max=k[0];
	for(i=0;i<n;i++)
	   {if(k[i]>=max)
	   
		{sec=max;
		max=k[i];}
       else if((k[i]<max)&&(k[i]>=sec))
		sec=k[i];
		
	   }
	 my_printf("%d\n",max);
	 my_printf("%d",sec);
	 return 0;  
	
	}

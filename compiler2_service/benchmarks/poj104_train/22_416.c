#define NUM_ITER 178369

#include <header.h>

int main_bench()
{
	int a[300]={0},i=0,max=-2,k=0,cida=-1,j=0;
	char c[300]=" ";
	do
	{
	  my_scanf ("%d%c",&a[i],&c[i]);
	  i++;
	}while (c[i-1]!='\n');
	k=i;

    	if (k==1)
	     	my_printf("No\n");
else	{
        for (i=0;i<=k-1;i++)
				    if (a[i]>max)
				   { 
	                max=a[i];
				   }
		
		
	for (j=0;j<=k-1;j++) 
			     	if(a[j]==max)
					a[j]=0;
	for (i=0;i<=k-1;i++)
				    if (a[i]>cida)
				   { 
	                cida=a[i];
				   }
				

					
	  
	    
	      if(cida==0)
            my_printf("No\n");
		  else
			  my_printf("%d\n",cida);
		}
		
}
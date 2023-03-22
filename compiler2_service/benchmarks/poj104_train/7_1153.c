#define NUM_ITER 905250

#include <header.h>


int main_bench()
{
	int i,j,k,l,n=0,m=1,z=0,t=1,g;
	char q[256],p[256],w[256];
	my_scanf("%s",q);
	my_scanf("%s",p);
	my_scanf("%s",w);
	k=strlen(q);l=strlen(p);
	for(i=0;i<k;i++)
	{
		if(p[0]==q[i])
		{
	       for(j=1;j<l;j++)
		   {
			   g=1;
			 if(p[j]!=q[j+i])
				g=0;
		   }
				if(g==1)
				{
					z=1;
					m=i;
					break;
				}
			 	
			
		
		}
	}		
	if(z)
	{
		for(j=0;j<m;j++)
		{
			my_printf("%c",q[j]);
		}
		my_printf("%s",w);
		for(j=m+l;j<k;j++)
			my_printf("%c",q[j]);
	}
	else
		my_printf("%s",q);
	return 0;
}
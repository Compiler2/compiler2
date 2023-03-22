#include <header.h>

int main_bench()
{
	int i,j,k,l;
	char q[51],p[51];
	my_scanf("%s%s",q,p);
	k=strlen(q);
	l=strlen(p);
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			if(q[i]==p[j])
			{break;
			}
			
		}break;
	}
		   
	my_printf("%d",j);

				
			        
	return 0;
}
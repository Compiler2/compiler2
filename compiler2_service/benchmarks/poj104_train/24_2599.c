#include <header.h>


int main_bench()



{
	int n,p,i,j,l,large,small;
	char a[50],max[50],min[50];
	large=0;
	small=50;
	my_scanf("%d",&n);

	{
			my_scanf("%s",&a);
			l=strlen(a);
			small=l;
			large=l;

				for(i=0;i<=l;i++)
				{
					min[i]=a[i];
					
				}
				for(i=0;i<=l;i++)
				{
					max[i]=a[i];
					
				}
		for(j=2;j<=n;j++)
		{
			my_scanf("%s",&a);
			l=strlen(a);
			if (l<small)
			{
				for(i=0;i<=l;i++)
				{
					min[i]=a[i];
					
				}
				small=l;			
			}
			
			else if (l>large)
			{
				for(p=0;p<=l;p++)
				{
					max[p]=a[p];
					
				}
				
				large=l;			
			}
			
		}
		
		for (i=0;i<=large-1;i++)
			my_printf("%c",max[i]);
		my_printf("\n");
		for (i=0;i<=small-1;i++)
			my_printf("%c",min[i]);
	}	
	
	return 0;
}

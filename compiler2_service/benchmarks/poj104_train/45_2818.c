#include <header.h>


int main_bench()
{
	int n,i,p,j,l,k,l2;
	char a[60],b[60];

	
	my_scanf("%s %s",&a,&b);
	l=strlen(a);
	l2=strlen(b);
	i=0;
	j=0;
	k=0;
	while (i<l2)
	{
		if (a[0]==b[i])
		{
			k=i;
			p=i;
			
			while (a[j]==b[k])
				
			{
				j++;
				k++;
			}
			
		}
		if (j>=l-1)
		{
			my_printf("%d",p);
		break;
		}



		i++;
		
	}
	
	
	
	return 0;
}

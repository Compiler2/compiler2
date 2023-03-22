#define NUM_ITER 16876

#include <header.h>


int main_bench()
{
	int n,i,p,j,k,s,l;
	char a[110],b[110]={' '};
	my_scanf("%d",&n);
	for (k=1;k<=n;k++)
	{	
		s=0;
		my_scanf("%s",&a);
		l=strlen(a);
		for (i=0;i<=l-1;i++)
		{
			if (a[i]=='(')
			{
				s+=1;
				b[i]=' ';
				continue;
			}
			else if (a[i]==')')
			{
				if (s>0)
				{
					s-=1;
					b[i]=' ';
					continue;
					
				}
				else if (s==0)
					b[i]='?';
				continue;
			}
			else
				b[i]=' ';
			continue;
			
			
		}
		s=0;
		for (i=l-1;i>=0;i--)
		{
			if (a[i]==')')
			{
				s+=1;
				continue;
			}
			else if (a[i]=='(')
			{
				if (s>0)
				{
					s-=1;
					continue;
					
				}
				else if (s==0)
					b[i]='$';
				continue;
			}
		}
		
		for (j=0;j<=l-1;j++)	
		{
			my_printf("%c",a[j]);
		}
		
		my_printf("\n");		
		for (j=0;j<=l-1;j++)	
		{
			my_printf("%c",b[j]);
		}
		my_printf("\n");	
		
	}


return 0;
}

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	int i,j,num,p,q;
	for(i=0;i<n;i++)
	{
		char a[101],b[101];
		my_scanf("%s", &a);
		num=strlen(a);
		for(j=0;j<num;j++)
		{
			if(a[j]=='(')
			{
				b[j]='$';
			}
			else if(a[j]==')')
			{
				b[j]='?';
			}
			else 
			{
				b[j]=' ';
			}
		}
        
        for(p=num-1;p>=0;p--)
		{
			if(b[p]=='$')
			{
			    for(q=p;q<num;q++)
				{
					if(b[q]=='?')
					{
						b[q]=' ';
						b[p]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<num;j++)
		{
			
			my_printf("%c", a[j]);
		}
		my_printf("\n");
		for(j=0;j<num;j++)
		{
			
			my_printf("%c", b[j]);
		}
		my_printf("\n");
		p=0;
		q=0;
	}
}
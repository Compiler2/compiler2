#define NUM_ITER 3144

#include <header.h>

int main_bench()
{	int i,j,n,c,k,l,m,x=1;
    char a[100000],b[26];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{	x=1;
		for(j=0;j<26;j++)
			b[j]=' ';
		my_scanf("%s",a);
		c=strlen(a);
		l=0;
		for(j=0;j<c;j++)
		{	for(k=0;k<26;k++)	
			{	if(a[j]==b[k])
				{	a[j]=' ';
					for(m=0;m<c;m++)
					{	if(a[m]==b[k])
							a[m]=' ';
					}
					break;
				}
				else if(k==25)
				{	b[l]=a[j];
						l++;
				}
			}
		
		}
		for(j=0;j<c;j++)
		{	if(a[j]!=' ')
			{	my_printf("%c\n",a[j]);
				x=0;
				break;
			}
		}
		if(x==1)
			my_printf("no\n");
	}
	return 0;
}
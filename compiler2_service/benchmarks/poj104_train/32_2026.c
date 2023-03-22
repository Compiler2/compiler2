#define NUM_ITER 13136

#include <header.h>

int main_bench()
{	
	char a[100][100],b[100][100];
	char c[100][101];
	int i,n;
	int p,q,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a[i]);
		my_scanf("%s",&b[i]);
	}
	
	for(i=0;i<n;)
	{   
		for(t=0,p=strlen(a[i])-1,q=strlen(b[i])-1;p>=0;p--,q--)
		{
			if(p>=0&&q>=0&&a[i][p]>=b[i][q])	{
				t=0;c[i][p]=a[i][p]-b[i][q]+t;
			}
			else if(p>=0&&q>=0&&a[i][p]<b[i][q])	{
				t=1;
				c[i][p]=a[i][p]+t*10-b[i][q];
				a[i][p-1]=a[i][p-1]-1;
			}
			else if(p>=0&&q<0)	{
				t=0;c[i][p]=a[i][p]-48;
			}
			
			c[i][p]+=48;
		}
		
		c[i][strlen(a[i])]='\0';
		i++;
	}
	for(i=0;i<n;i++)
	{
		my_printf("%s\n",c[i]);
	}
	return 0;
}
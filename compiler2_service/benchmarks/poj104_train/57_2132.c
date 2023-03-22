#define NUM_ITER 8307

#include <header.h>

int main_bench()
{
	int n,i,j;
	int x,y,z;
	char c[35];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<35;j++)
		{
			c[j]=0;
		}
		my_scanf("%s",c);
		x=strlen(c)-1;
		y=x-1;
		z=x-2;
		if(c[x]=='r'&&c[y]=='e') 
		{
			c[x]=0;
			c[y]=0;
		}
		else if(c[x]=='y'&&c[y]=='l')
		{
			c[y]=0;
            c[x]=0;
		}
		else if(c[x]=='g'&&c[y]=='n'&&c[z]=='i')
		{
            c[z]=0;
            c[y]=0;
			c[x]=0;
		}
		my_printf("%s\n",c);
	}
	return 0;
}

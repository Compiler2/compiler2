#define NUM_ITER 31493

#include <header.h>



int main_bench()
{
	int n,i,l,m,x;
	my_scanf("%d",&n);
	char c[21];
	for(l=0;l<n;l++)
	{
		x=0;
        my_scanf("%s",c);
		m=strlen(c);
		if((c[0]>=65&&c[0]<=90)||(c[0]>=97&&c[0]<=122)||c[0]=='_')
		{
			for(i=1;i<m;i++)
			{
				if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)||(c[i]=='_')||(c[i]>=48&&c[i]<=57))
				{
					x=1;
				}
				else
				{
					x=0;
					break;
				}
			}
		}
		else
		{
			x=0;
		}
		if(x==0) my_printf("no\n");
		if(x==1) my_printf("yes\n");
	}
	return 0;
}

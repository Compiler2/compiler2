#define NUM_ITER 848435

#include <header.h>

int main_bench()
{
	char a[100],b[100],c[100];
	int l,p,q,i,j,s,m=0,k,y;
	gets(a);
	gets(b);
	gets(c);
	l=strlen(a);p=strlen(b);
	for(i=0;i<l;i++)
	{
		    k=i;
			j=0;
			while(a[k]==b[j]&&j<p)
			{
				k++;
				j++;
			}
			if(j==p)
			{
				for(s=i;s<i+p;s++)
				{
					a[s]=c[m];
					m++;
					y=1;
				}
			}
			if(y==1)
				break;
	}
	my_printf("%s\n",a);
}
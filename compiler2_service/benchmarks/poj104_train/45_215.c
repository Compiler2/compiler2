#define NUM_ITER 1162585

#include <header.h>

int main_bench()
{
	char a[50];
	char b[50];
	int i,j,k,l,m=0;
	my_scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++)
		;
	for(j=0;b[j]!='\0';j++)
		;
	for(k=0;k<=j-1;k++)
	{
		if(a[0]==b[k])
		{
			for(l=0;(l<=i-1)&&(k+l<=j-1);l++)
			{
				if(a[l]!=b[k+l])break;
			}
			if(l==i)m=1;
		}
		if(m==1)break;
	}
	if(k!=j)my_printf("%d\n",k);
	
}
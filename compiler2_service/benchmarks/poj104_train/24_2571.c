#define NUM_ITER 33166

#include <header.h>


int main_bench()
{
	int n,i,j,l;
	char a[100],max[100],min[100];
	my_scanf("%d",&n);
	my_scanf("%s", a);
	int minl=strlen(a),maxl=strlen(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		max[i]=a[i];
		min[i]=a[i];
	}
	for(i=1;i<n;i++)
	{
		my_scanf("%s", a);
		l=strlen(a);
		if(l>maxl)
		{
			for(j=0;j<l;j++)
			{
				max[j]=a[j];
			}
			maxl=l;
		}
		if(l<minl)
		{
			for(j=0;j<l;j++)
			{
				min[j]=a[j];
			}
			minl=l;
		}
	}
	max[maxl] = '\0';
	for(i=0;i<maxl;i++)	my_printf("%c",max[i]);
	my_printf("\n");
	min[minl] = '\0';
	for(i=0;i<minl;i++)	my_printf("%c",min[i]);
}
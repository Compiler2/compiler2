#define NUM_ITER 940283

#include <header.h>

int main_bench()
{
	char a[300],b[300],c[300];
	int i,j,k,n1,n2;
	my_scanf("%s %s %s",a,b,c);
	n1=strlen(a);
	n2=strlen(b);
	for (i=0;i<=n1-n2;i++)
	{
		for (j=0;j<n2;j++)
			if (b[j]==a[i+j])
			{
				k++;
				if (k==n2) break;
			}
			else { k=0; break;}
			if(k==n2) break;
	}
	if (k==n2)
	{
		for (j=0;j<n2;j++)
			a[i+j]=c[j];
		my_printf("%s",a);
	}
else my_printf("%s",a);
	return 0;
}
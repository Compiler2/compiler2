#include <header.h>

int main_bench()
{	
	int n,a[300],i,b[300],j;
	my_scanf("%d",&n);
	for (i=0;i<n;i++) { my_scanf("%d",&a[i]); b[i]=0;}
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
			if ((a[i]==a[j])&&b[j]==0) b[j]=1;
			for (i=0;i<n;i++) if (b[i]==0)  j=a[i]; 
	i=0;
	while (a[i]!=j) 
	{
		if (b[i]==0) my_printf("%d,",a[i]);
		i++;
	}
	my_printf("%d\n",j);
}
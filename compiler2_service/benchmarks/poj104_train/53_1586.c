#define NUM_ITER 8541

#include <header.h>

int main_bench()
{
	int i,j,n,m,a[100],s[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(j=0;j<n-1;j++)
		for(i=j+1;i<n;i++)
			if(a[i]==a[j]&&a[j]!=0) a[i]=0;

    j=0;
	for(i=0;i<n;i++)
		if(a[i]) s[j++]=a[i];

	m=j;
	for(i=0;i<m-1;i++)
		my_printf("%d,",s[i]);
	my_printf("%d\n",s[m-1]);
}
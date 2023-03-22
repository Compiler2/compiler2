#define NUM_ITER 201027

#include <header.h>

int main_bench()
{
	int a[300],i,m,max,n=0,s=0;
	char b;
	for(i=0;i<300;i++)
	{
		my_scanf("%d",&a[i]);
		b=getchar();
		if(b=='\n')
		{
			m=i;
			break;
		}

	}
	if(m==1)
		my_printf("No");
	for(i=0;i<m;i++)
		if(a[i]==a[i+1])
			n++;
		if(n==m)
			my_printf("No");
		else
		{
	max=a[0];	
	for(i=0;i<=m;i++)
		if(max<a[i])
			max=a[i];
	for(i=0;i<m+1;i++)
		if(s<a[i]&&a[i]<max)
			s=a[i];
	for(i=1;i<=m;i++)
		if(s<a[i]&&a[i]<max)
			s=a[i];
		my_printf("%d",s);
		}
}
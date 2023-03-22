#include <header.h>

int main_bench()
{
	int a[300],n=1,i,m=0,ci=-1;
	my_scanf("%d",&a[0]);
	while (getchar()==',') my_scanf("%d",&a[n++]);
	for (i=0;i<n;i++)
		if (m<a[i]) m=a[i];
	for (i=0;i<n;i++)
		if (a[i]!=m)
			if (a[i]>ci) ci=a[i];
	if (ci==-1) my_printf("No\n");
	else my_printf("%d\n",ci);
}
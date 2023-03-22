#define NUM_ITER 1724749

#include <header.h>

int main_bench()
{
	int a[300],n,m,x,y;
	char b=',';
	for(n=0;b==',';n++)
	{my_scanf("%d",&a[n]);
	b=getchar();
	}
	m=0;
	x=(a[m]>=a[m+1])?a[m]:a[m+1];
	a[m+1]=(a[m]>=a[m+1])?a[m+1]:a[m];
	m++;
	while(m<n-1)
	{
		if(x<a[m+1]){y=x;x=a[m+1];a[m+1]=y;}
		else if(x==a[m+1]&&x!=a[m]){a[m+1]=a[m];}
		else if(x!=a[m])a[m+1]=(a[m]>=a[m+1])?a[m]:a[m+1];
		m++;
	}
	if(n==1)my_printf("No");
	else if(x==a[m])my_printf("No");
	else my_printf("%d",a[m]);
	return 0;
}
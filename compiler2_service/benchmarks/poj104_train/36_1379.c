#include <header.h>

int main_bench()
{
	char a[20],b[20];
	int i,j,k;
	int m,n;
	m=0;
	n=0;
    for(i=0;i<20;i++)
	{
		my_scanf("%c",&a[i]);
		if(a[i]==' ')
			break;
	}
   for(j=0;j<20;j++)
	{
		my_scanf("%c",&b[j]);
		if(b[j]=='\n')
			break;
	}
for(k=0;k<i;k++)
{
	m=m+a[k];
}
for(k=0;k<j;k++)
{
	n=n+b[k];
}
if(m==n)
my_printf("YES");
else 
my_printf("NO");
  return 0;
}


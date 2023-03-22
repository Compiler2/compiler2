#include <header.h>

int main_bench()
{
	char a[400];
	int b[400],n,m,i,j,k;
	for(i=1;;i++)
	{
		my_scanf("%d%c",&b[i],&a[i]);
		if(a[i]!=',')break;
	}
	for(j=1;j<=i;j++)
	{
		for(k=1;k<=i-j;k++)
		{
			if(b[k]<=b[k+1]){m=b[k];b[k]=b[k+1];b[k+1]=m;}
		}
	}
	for(j=2;j<=i;j++)
	{
		if(b[j]<b[1]){my_printf("%d",b[j]);break;}
	}
         if(j==i+1)my_printf("No");
}
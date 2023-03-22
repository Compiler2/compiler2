#include <header.h>

int main_bench()
{
	int r,c,i,j;
	int a[100][100];
	my_scanf ("%d%d",&r,&c);
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			my_scanf ("%d",&a[i][j]);
	for (i=0;i<r+c-1;i++)
	{
		if (i<c&&c<=r)
			for (j=0;j<=i;j++)
				my_printf("%d\n",a[j][i-j]);
		else if (i>=c&&c<=r&&i<r)
			for (j=i-c+1;j<=i;j++)
				my_printf("%d\n",a[j][i-j]);
		else if (i>=r&&c<=r)
			for (j=i-c+1;j<r;j++)
				my_printf("%d\n",a[j][i-j]);
		else if (i<r&&c>r)
			for (j=0;j<=i;j++)
				my_printf("%d\n",a[j][i-j]);
		else if (i>=r&&c>r&&i<c)
			for (j=0;j<r;j++)
				my_printf("%d\n",a[j][i-j]);
		else if (i>=c&&c>r)
			for (j=i-c+1;j<r;j++)
				my_printf("%d\n",a[j][i-j]);
	}
	return 0;
}
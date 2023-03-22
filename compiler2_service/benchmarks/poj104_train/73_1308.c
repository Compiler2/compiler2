#include <header.h>

int main_bench()
{
	int n,i,j,sign,sg,max;
	int a[10][10];
	int maxline[10];

	for (i=1;i<=5;i++)
		for (j=1;j<=5;j++)
			my_scanf("%d",&a[i][j]);
	for (i=1;i<=5;i++)
	{
		max=1;
		for (j=2;j<=5;j++)
			if (a[i][j]>a[i][max]) max=j;
		maxline[i]=max;
	}
	sg=0;
	for (i=1;i<=5;i++)
	{
		sign=1;
		for (j=1;j<=5;j++)
			if (a[j][maxline[i]]<a[i][maxline[i]]) sign=0;
		if (sign==1) {my_printf("%d %d %d",i,maxline[i],a[i][maxline[i]]);sg=1;}
	}
	if (sg==0) my_printf("not found");
	return 0;
}
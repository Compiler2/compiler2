#define NUM_ITER 10585

#include <header.h>

main_bench()
{
	int n,i,j,t,as,bs;
	char a[100][100],b[100][100];
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%s",a[i]);
		my_scanf("%s",b[i]);
		getchar();
	}
	for (i=1;i<=n;i++)
	{
		as=strlen(a[i]);
		bs=strlen(b[i]);
		for (j=0;j<as;j++)
			a[i][j]-='0';
		for (j=0;j<bs;j++)
			b[i][j]-='0';
		for (j=1;j<=bs;j++)
		{
			a[i][as-j]-=b[i][bs-j];
			if (a[i][as-j]<0) 
			{
				a[i][as-j-1]--;
				do
				a[i][as-j]+=10;
				while (a[i][as-j]<0);
			}
		}
		t=0;
		while (a[i][t]==0)
			t++;
		for (j=t;j<as;j++)
			my_printf("%d",a[i][j]);
		my_printf("\n");
	}
	return 0;
}
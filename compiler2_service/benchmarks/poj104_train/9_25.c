#define NUM_ITER 3226

#include <header.h>


int main_bench()
{
	int n,i,j,h=0,k=1,b=0;
	char a[120][20],c[120][20];
	int y[120],Z[155][100]={0},cy[120];
	my_scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		my_scanf("%s %d",a[i],&y[i]);
	}

	for(i=60;i<=150;i++)
	{
		for(j=1;j<=n;j++)
		{
			Z[i][h]=0;
			if(i==y[j])
			{
				Z[i][h]=j;
				h++;
			}
		}
		h=0;
	
	}
	for(i=1;i<=n;i++)
	{
		if(y[i]<60)
		{
			strcpy(c[k],a[i]);
			cy[k]=y[i];
            b=k;
			k++;
		}
	}

	h=0;
	for(i=150;i>=60;i--)
	{
		for(h=0;h<=10;h++)
		{
			if(Z[i][h]==0) break;
		    else
			{
				my_printf("%s\n",a[Z[i][h]]);
			}
		}
	}
	for(i=1;i<=b;i++)
	{
		my_printf("%s\n",c[i]);
	}
	return 0;








	


}


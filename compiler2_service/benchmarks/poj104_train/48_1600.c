#define NUM_ITER 890

#include <header.h>


int main_bench()
{
	int i,j,k,l,n,m,num,day;
	int a[9][9]={0},b[9][9]={0};
	my_scanf("%d%d",&num,&day);
    a[4][4]=num;
	for(i=0;i<day;i++)
	{
		memset(b,0,sizeof(b));
		for(j=1;j<8;j++)
			for(k=1;k<8;k++)
			{
				b[j][k]+=a[j][k];
				for(l=-1;l<=1;l++)
					for(m=-1;m<=1;m++)
						b[j+l][k+m]+=a[j][k];
			}
		memcpy(a,b,sizeof(a));
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][8]);
	}
	return 0;
}


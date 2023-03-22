#define NUM_ITER 3885

#include <header.h>

int m,n,a[8][8];
int hang(int h)
{
	int i,temp=a[h][0],l=0;
	for(i=1;i<n;i++)
		if(a[h][i]>temp)
		{
			temp=a[h][i];
			l=i;
		}
	return l;
}
int lie(int l)
{
	int i,temp=a[0][l],h=0;
	for(i=1;i<m;i++)
		if(a[i][l]<temp)
		{
			temp=a[i][l];
			h=i;
		}
	return h;
}

int main_bench()
{
	int i,j;
	my_scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
		if(lie(hang(i))==i)
		{
			my_printf("%d+%d",i,hang(i));
			break;
		}
	if(i==m)
		my_printf("No");
}

#define NUM_ITER 32

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,j,k,t;
	for(t=0;t<n;t++)
	{
	int h,l;
	int sum=0;
	my_scanf("%d %d",&h,&l);
	int a[100][100]={0};
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			my_scanf("%d",&a[i][j]);

	if(h==1)
		for(i=0;i<l;i++)
		sum=sum+a[0][i];
	else
		if(l==1)
			for(j=0;j<h;j++)
				sum=sum+a[j][0];
		else{

	
	for(i=0;i<l;i++)
		sum=sum+a[0][i]+a[h-1][i];
	for(j=1;j<h-1;j++)
		sum=sum+a[j][0]+a[j][l-1];
		}
	
	my_printf("%d\n",sum);
	
		
	}
}
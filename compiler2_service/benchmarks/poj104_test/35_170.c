#define NUM_ITER 1382

#include <header.h>

int max(int b[10],int n)
{
	int i,max3=b[0],max2=0;
	for(i=0;i<n;i++)
		if(b[i]>max3)
		{
			max3=b[i];
		    max2=i;
		}
	return(max2);
}
int main_bench()
{
	int m,n,i,j,sum=0,a[10][10],k,ap=0;
	my_scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(k=0;k<n;k++)
			my_scanf("%d",&a[i][k]);
	for(i=0;i<m;)
	{
		j=max(a[i],n);
		for(k=0;k<m;k++)
			if(a[k][j]<a[i][j])
				goto a1;
		my_printf("%d+%d",i,j);
		ap++;
		goto a2;
a1:     i++;
	}
a2:	if(ap==0)
	   my_printf("No");
}
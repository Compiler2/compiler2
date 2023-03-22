#define NUM_ITER 9939

#include <header.h>

int main_bench()
{
	int a[300],b[300]={0},i,n,j,k=0;
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	b[0]=a[0];k++;
	for(i=1;i<n;i++)
	{	my_scanf("%d",&a[i]);
		for(j=0;j<k;j++)
		{if(a[i]==b[j])
		break;}
		
		if(j==k) b[k++]=a[i];
		
	}
	k--;
	for(i=0;i<k;i++)
	my_printf("%d,",b[i]);
	my_printf("%d",b[k]);
}
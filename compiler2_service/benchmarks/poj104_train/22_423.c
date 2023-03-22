#define NUM_ITER 1309342

#include <header.h>

int main_bench()
{
	int a[301],len,max=0,max1=0,i,j,k,l;
	char c[301];
	for(i=1;i<301;i++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&c[i]);
		if(c[i]!=',')
{
		len=i;
		break;}

	}
	for(j=1;j<=len;j++)
	{
		if(a[j]>=max)
			max=a[j];
	}
	for(k=1;k<=len;k++)
	{
		if(a[k]==max)
			a[k]=0;
	}
	for(l=1;l<=len;l++)
	{
		if(a[l]>=max1)
			max1=a[l];
	}
         if(max1==0)
        my_printf("No\n");
else
	my_printf("%d\n",max1);
	return 0;
}

#define NUM_ITER 1400575

#include <header.h>

int main_bench()
{
	int m,n,i=1,j,k,a[301];
	my_scanf("%d",&a[0]);
	while(my_scanf(",%d",&a[i])) i++;
	for(j=0;j<i;j++)
		for(k=0;k<i-j-1;k++)
		{
			if(a[k]>a[k+1]) {n=a[k];a[k]=a[k+1];a[k+1]=n;}
		}
	for(j=i-1;j>=0;j--)
		if(a[j]>a[j-1]) break;
	if(j==-1) my_printf("No\n");
	else my_printf("%d\n",a[j-1]);
	return 0;
}

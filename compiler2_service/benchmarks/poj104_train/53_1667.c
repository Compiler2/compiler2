#define NUM_ITER 8673

#include <header.h>

int main_bench()
{
	int k,i,j,n,a[300]={0},b[10]={0},B;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);}
	for(k=0,i=0;i<n;i++)
	{
	  B=0;
	  for(j=0;j<i;j++)if(a[j]==a[i]) {B=1;break;}	
	  if(B==0) {b[k]=a[i];k++;}
	}
	for(i=0;i<k;i++)
	{if(i>0) my_printf(",");my_printf("%d",b[i]);}
	return 0;
}
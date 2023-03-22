#define NUM_ITER 46455

#include <header.h>

int main_bench()
{
	int a[100000],i,j,k,n,t=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	
	for(i=0;i<n-t-1;i++){
		if(a[i]==k){
			for(j=i;j<n-t-1;j++)
			a[j]=a[j+1];
			t++;
			i--;
		}
	}
		if(a[i]==k){
		a[i]='\0';
		t++;
		}
		
	
	for(i=0;i<n-t-1;i++)
	my_printf("%d ",a[i]);
	my_printf("%d",a[i]);
}
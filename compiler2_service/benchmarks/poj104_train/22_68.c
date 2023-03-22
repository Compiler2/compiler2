#include <header.h>

int main_bench()
{
	int i,j,n=1,max,k,d;
	int a[300]={0};
	my_scanf("%d",&a[0]);
	for(i=1;getchar()!='\n';i++)
	{my_scanf("%d",&a[i]);
	n++;}
	
	max=a[0];
	for(i=0;i<n;i++)
		if(a[i]>max)
		max=a[i];
	for(i=0;i<n;i++)
	 if(a[i]==max)
	 a[i]=0;
	
	k=a[0];
	for(i=0;i<n;i++)
		if(a[i]>k)
			k=a[i];
		if(n==1)
			my_printf("No");
	
		else if(k!=0)
		my_printf("%d",k);
		else
		my_printf("No");



}
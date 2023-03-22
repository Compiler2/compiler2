#include <header.h>

int main_bench()
{
	int a[300],i,n,max=0,max1=0,p;
	char b[300]={0};
	for(i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=getchar();
		n=i;
		if(b[i]=='\n')
			break;
	}
	for(i=0;i<n+1;i++)
	{
		if(a[i]>=max)
			max=a[i];
	}

	for(i=0;i<n+1;i++)
	{
		if(a[i]==max)
			a[i]=0;
	}


	for(i=0;i<n+1;i++)
	{
		if(a[i]>max1)
			max1=a[i];
		p=i;
	}

	if(max1!=0)
		my_printf("%d\n",max1);
	if(max1==0)
		my_printf("No\n");
}

	
		


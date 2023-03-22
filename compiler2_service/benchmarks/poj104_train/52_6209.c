#include <header.h>


trans(int a[],int m,int n)
{
	int temp;
	int i;
	if(m==1){
		temp=a[n-1];
		for(i=n-1;i>0;i--)
			a[i]=a[i-1];
		a[0]=temp;
	}
	else
	{
		trans(a,1,n);
		trans(a,m-1,n);
	}
	return 0;
}

		

main_bench()
{
	int n,m;
	int a[110];
	int i;
	
	my_scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);

	trans(a,m,n);
	
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
		my_printf(" %d",a[i]);
}
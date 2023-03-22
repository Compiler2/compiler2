#include <header.h>


main_bench()
{
	int a[100000],k,i,j,n,m=0,*p=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
    for(i=n-1;i>=0;i--)
		if(*(p+i)==k)
		{
			for(j=i;j<n-1;j++)
				*(p+j)=*(p+j+1);
			m+=1;
		}
	for(i=0;i<n-m-1;i++)
		my_printf("%d ",*(p+i));
	my_printf("%d\n",*(p+i));
}
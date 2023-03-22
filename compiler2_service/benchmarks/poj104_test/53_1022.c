#include <header.h>

int main_bench()
{
	int *p,*q,i,j,n,k,a[300],b[300];
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    p=a;
	k=1;
	q=b;
	*q=*p;
    for(i=1;i<n;i++)
	{
		for(j=0;j<k;j++)
		{if(*(p+i)==*(q+j))
		break;}
	if(j==k)
	{*(q+j)=*(p+i);
	k++;}
	}
    for(i=0;i<k-1;i++)
    my_printf("%d,",b[i]);
	my_printf("%d",b[k-1]);
	return 0;
}

#define NUM_ITER 1080787

#include <header.h>

int main_bench()
{
	char a[50],b[50],*p1,*p2;
	int m,n,c,i,j,flag;
	my_scanf("%s %s",a,b);
	p1=a;
	p2=b;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	if(*(p2+i)==*p1)
	{
		c=i;
		flag=1;
		for(j=c;j<c+m;j++)
		if(*(p2+j)!=*(p1+j-c))
		{
			flag=0;
			break;
		}
		if(flag==1)
		{
			my_printf("%d",c);
			break;
		}
	}
	return (0);
}
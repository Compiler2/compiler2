#include <header.h>


int main_bench()
{
	int n,i,l,flag,sum,max,lab,len,j,b[10000];
	char a[10000],c;
	my_scanf("%d",&n);
	my_scanf("%c",&c);
	gets(a);
	len=strlen(a);
	l=0;
	lab=0;
	max=0;
	while (a[l]!=0)
	{
		sum=0;
		for (i=l;i<len;i++)
		{
			flag=1;
			for (j=0;j<n;j++)
			{
				if (a[l+j]!=a[i+j])
				{
					flag=0;
				}
			}
			if (flag==1)
				sum++;
		}
		if (sum>max)
		{
			max=sum;
		}
		b[l]=sum;
		l++;
	}
	if(max>1)
	{
	my_printf("%d\n",max);
	for (i=0;i<len;i++)
	{
		if(b[i]==max)
		{
			for (j=0;j<n;j++)
			{
				my_printf("%c",a[j+i]);
			}
			my_printf("\n");
		}
	}
	}
	else
		my_printf("NO");
	return 0;
}


#define NUM_ITER 15535

#include <header.h>

int main_bench()
{
	int n,i,j,num[1000],l[1000],count[128],m,max;
	char edi[1000][26],au[128];
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("\n%d",&num[j]);
		gets(edi[j]);
		l[j]=strlen(edi[j]);
	}
	for(i=0;i<128;i++)
		count[i]=0;
	for(j=0;j<n;j++)
	{
		for(i=1;i<l[j];i++)
		{
			m=edi[j][i];
			au[m]=edi[j][i];
			count[m]++;
		}
	}
	max=0;
	for(i=0;i<128;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			m=i;
		}
	}
	my_printf("%c\n%d",au[m],max);
	for(j=0;j<n;j++)
	{
		for(i=1;i<l[j];i++)
		{
			if(edi[j][i]==au[m])
				my_printf("\n%d",num[j]);
		}
	}
	return 0;
}
#define NUM_ITER 862903

#include <header.h>

int main_bench()
{
	int n,i,j,k,len,sum[500]={0},p,max=0;
	char temp[5],a[500];
	my_scanf("%d\n",&n);
	gets(a);
	len=strlen(a);
	for(i=0;i<len-n+1;i++)
	{
		for(j=0;j<n;j++)
			temp[j]=a[i+j];
		for(j=i;j<len-n+1;j++)
		{
			p=0;
			for(k=0;k<n;k++)
				if(temp[k]==a[j+k])
					p=1;
				else
				{
					p=0;
					break;
				}
			if(p)
				sum[i]++;
		}			
	}
	for(i=0;i<len-n+1;i++)
		if(sum[i]>max)
			max=sum[i];
	if(max==1)
		my_printf("NO");
	else
	{
		my_printf("%d\n",max);
		for(i=0;i<len-n+1;i++)
			if(sum[i]==max)
			{
				for(j=0;j<n;j++)
					my_printf("%c",a[i+j]);
				my_printf("\n");
			}
	}
	return 0;
}
#define NUM_ITER 896706

#include <header.h>




int main_bench()
{
	int n,i,j,k,p,l,count=0;
	char record[500][6],a[500],temp[6];
	int num[500]={0};
	
	my_scanf("%d",&n);
	my_scanf("%s",a);
	l=strlen(a);
	for (i=0;i<=l-n;i++)
	{
		for (j=0;j<=n-1;j++)
		{
			temp[j]=a[i+j];
		}
		temp[j]='\0';
		int found=0;
		for (p=0;p<count;p++)
		{
			if (strcmp(record[p],temp)==0)
			{
				found=1;
				num[p]++;
				break;
			}
			
		}	
		
		if (found==0)
		{		
			
			for (j=0;j<=n;j++)
			{
				record[count][j]=temp[j];
				num[count]=1;
			}
			
			count++;
		}
	}
	
	int max=0;
	for (i=0;i<=count;i++)
	{
		if (num[i]>max)
		{
			max=num[i];
		}
	}
	if (max==1)
	{
		my_printf("NO");
	return 0;
	}
	
	my_printf("%d\n",max);
	
	for (i=0;i<=count;i++)
	{
		if (num[i]==max)
		{
			
			my_printf("%s\n",record[i]);
			
		}
		
	}
	
	return 0;
}
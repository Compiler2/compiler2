#define NUM_ITER 899184

#include <header.h>

int main_bench()
{
	int n,i,j,k,l,ans[500]={0},max,p;
	char a[500],b[500][5];
	my_scanf("%d",&n);
	my_scanf("%s",&a);
	l=strlen(a);
	k=0;
	for(i=0;i<=l-n;i++)
	{
		for(p=i,j=0;j<n;j++,p++)
		{
			b[k][j]=a[p];
		}
		k++;
	}
	max=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				ans[i]++;
			}
		}
		if(ans[i]>=max){max=ans[i];}
	}

	if(max==1){my_printf("NO");return 0;}
	my_printf("%d\n",max);
	for(i=0;i<k;i++)
	{
		if(ans[i]==max)
		{
			
			my_printf("%s\n",b[i]);

		}
	}
	
	

}
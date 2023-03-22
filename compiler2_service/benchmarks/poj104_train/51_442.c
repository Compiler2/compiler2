#define NUM_ITER 133183

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char s[505]={'\0'},s1[100]={'\0'},s2[100]={'\0'};
	my_scanf("%s",s);
	int l=strlen(s),i,i1,j,j1,k=0,a[500]={0},num[500]={0},max=0;
	for(i=0;i<=l-n;i++)
	{
		if(a[i]==0)
		{
			for(i1=i;i1<=n+i-1;i1++)
				s1[k++]=s[i1];
			k=0;
			for(j=i+1;j<=l-n;j++)
			{
				for(j1=j;j1<=n+j-1;j1++)
					s2[k++]=s[j1];
				k=0;
				if(strcmp(s1,s2)==0)
				{
					a[j]=1;
					num[i]+=1;
				}
			}
		}
	}
	for(i=0;i<=499;i++)
	{
		if((num[i]+1)>max)
			max=num[i]+1;
	}
	if(max>1)
	{
		my_printf("%d\n",max);
		for(i=0;i<=499;i++)
		{
			if((num[i]+1)==max)
			{
				for(j=i;j<=i+n-1;j++)
					my_printf("%c",s[j]);
				my_printf("\n");
			}
		}
	}
	else
		my_printf("NO");
}
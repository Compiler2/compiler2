#define NUM_ITER 849912

#include <header.h>

int main_bench()
{
	int n,i,l,j,ans[501]={0};
	char data[501]={0},use[501][5];
	my_scanf("%d",&n);
	my_scanf("%s",data);
	l=strlen(data);
	for(i=0;i<l-n+1;i++)
	{
		for(j=0;j<n;j++)
			use[i][j]=data[i+j];
		use[i][n]=0;
	}
	for(i=0;i<l-n+1;i++)
	{
		for(j=i+1;j<l-n+1;j++)
		{
			if(strcmp(use[i],use[j])==0&&use[i][0]!=0)
			{
				ans[i]++;
				use[j][0]=0;
			}
		}
	}
	int m=ans[0];
	for(i=0;i<l-n+1;i++)
	{
		if(ans[i]>m)
			m=ans[i];
	}
	if(m==0)
		my_printf("NO");
	else
	{
		my_printf("%d\n",m+1);
		for(i=0;i<l-n+1;i++)
		{
			if(ans[i]==m)
				my_printf("%s\n",use[i]);
		}
	}
}




		


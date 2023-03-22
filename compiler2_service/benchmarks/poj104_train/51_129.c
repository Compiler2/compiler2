#define NUM_ITER 959035

#include <header.h>

int main_bench()
{
	char s[505],n,x[505]={0},max=1,k;
	int i,j;
	my_scanf("%d",&n);
	my_scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l-n+1;i++)
	{
		for(j=i;j<l-n+1;j++)
		{
			for(k=0;k<n;k++)
				if(s[i+k]!=s[j+k])break;
			if(k==n)x[i]++;
		}
	}
	for(i=0;i<l;i++)if(x[i]>max)max=x[i];
	if(max==1)my_printf("NO");
	else
	{
		my_printf("%d\n",max);
		for(i=0;i<l;i++)if(x[i]==max)
		{
			for(k=0;k<n;k++)my_printf("%c",s[i+k]);
			my_printf("\n");
		}
	}
}

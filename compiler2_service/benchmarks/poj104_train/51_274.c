#define NUM_ITER 890101

#include <header.h>

int main_bench()
{
	char a[501];
	int b[501]={0},n,l,i,j,t,max,flag;
	my_scanf("%d",&n);
	getchar();
	gets(a);
	l=strlen(a);
	for(i=0;i<=l-n;i++)
	{
		for(j=i+1;j<=l-n;j++)
		{
			flag=0;
			for(t=0;t<n;t++)
			if(a[i+t]!=a[j+t])flag=-1;
			if(flag==0)b[i]++;
		}
	}
	max=b[0];
	for(i=0;i<=l-n;i++)
		if(max<b[i])max=b[i];
		if(max==0)my_printf("NO");
		else
		{
			my_printf("%d\n",max+1);
    for(i=0;i<=l-n;i++)
		if(b[i]==max)
		{
			t=i;
			for(j=0;j<n-1;j++)
			{
				my_printf("%c",a[t]);
				t++;
			}
			my_printf("%c\n",a[t]);
		}
		}

	return 0;
}
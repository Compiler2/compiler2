#define NUM_ITER 71415

#include <header.h>

int main_bench()
{
	int n,len,i,t,r,cout[500]={0},max,j;
    char a[500],b[300][5];
	my_scanf("%d",&n);
	getchar();
	gets(a);
	len=strlen(a);
	t=0;
	for(i=0;i<len;i++)
	{
		for(j=0;j<n;j++)
		{
			b[t][j]=a[i];
			i++;
		}
		b[t][j]=0;
		i=i-n;
		t++;
	}
	r=0;
	for(i=0;i<len;i++)
	{
		for(j=i;j<t;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				cout[r]++;
			}
		}
		r++;
	}
	max=cout[0];
	for(i=0;i<len;i++)
	{
		if(max<cout[i])
		{
			max=cout[i];
		}
	}
	if(max==1)
	{
		my_printf("NO");
		return 0;
	}
	my_printf("%d\n",max);
	for(i=0;i<len;i++)
	{
		if(max==cout[i])
		{
			my_printf("%s\n",b[i]);
		}
	}
	return 0;
}


#define NUM_ITER 805327

#include <header.h>

int main_bench()
{
	char a[504]={0};
	char x[500][8],tmp[8];
	int times[500]={0};
	int num=0;
	int n,i,j,len;
	my_scanf("%d",&n);
	getchar();
	gets(a);
	len=strlen(a);
	for(i=0;i<len-n+1;i++)
	{
		for(j=0;j<n;j++)tmp[j]=a[i+j];
		tmp[n]=0;
		for(j=0;j<num;j++)
		{
			if(strcmp(x[j],tmp)==0)
			{
				times[j]++;
				break;
			}
		}
		if(j==num)
		{
			strcpy(x[num],tmp);
			times[num]=1;
			num++;
		}
	}
	int max=0;
	for(i=0;i<num;i++)if(times[i]>max)max=times[i];
	if(max==1)
	{
		my_printf("NO\n");
		goto Eof;
	}
	my_printf("%d\n",max);
	for(i=0;i<num;i++)if(times[i]==max)puts(x[i]);
Eof:;
	return 0;
}
#include <header.h>

int main_bench()
{
    int l,n;
	my_scanf("%d",&n);
	char a[500],b[500][5];
	my_scanf("%s",a);
	l=strlen(a);
	int i,j;
	for(i=0;i<500;i++)
		for(j=0;j<5;j++)
			b[i][j]=0;
	for(i=0;i<l-n+1;i++)
	{
		int k=0;
		for(j=i;j<i+n;j++)
		{
			b[i][k]=a[j];
			k++;
		}
	
	}
	

	int d[500];
	for(i=0;i<l;i++)
		d[i]=1;

	for(i=0;i<l-n;i++)
	{
		for(j=i+1;j<l-n+1;j++)
			if(strcmp(b[i],b[j])==0)
			{
				d[i]++;
				d[j]=0;
			}
	}
	int max=d[0];
	for(i=0;i<l-n+1;i++)
		if(d[i]>max) max=d[i];

	if(max>1)
	{
		my_printf("%d\n",max);
		for(i=0;i<l-n+1;i++)
		{
			if(d[i]==max)  my_printf("%s\n",b[i]);
		}
	}
	else  my_printf("NO");

	


	
	return 0;
}

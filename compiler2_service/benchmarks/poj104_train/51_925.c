#define NUM_ITER 918197

#include <header.h>

int main_bench()
{
	char str[500],string[500][500];
	int i,j,m,n,k=0,a[500]={0},max=0,t=0;
	my_scanf("%d",&m);
	my_scanf("%s",str);
	n=strlen(str);
	for(i=0;i<=n-m;i++)
	{
		for(j=i;j<i+m;j++)
		{
			string[i][k]=str[j];
			k++;
		}
		string[i][k]='\0';
		k=0;
	}
	for(i=0;i<=n-m;i++)
	{
		for(j=0;j<=n-m;j++)
		{
			if(strcmp(string[i],string[j])==0) a[i]++;
		}
	}
	for(i=0;i<=n-m;i++)
	{
		if(a[i]>max) max=a[i];
	}
	if(max<=1) 
		my_printf("NO\n");
	else
	{
		my_printf("%d\n",max);
	    for(i=0;i<=n-m;i++)
		{
			if(a[i]==max)
			{
				for(j=0;j<i;j++)
				{
					if(strcmp(string[i],string[j])==0) 
					{
						t=1;
					    break;
					}
				}
			    if(t==0)
					my_printf("%s\n",string[i]);
			}
	        t=0;
		}
	}
    return 0;
}




	

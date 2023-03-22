#include <header.h>

int main_bench()
{
	int n;
	char s[1000];
	char a[1000][1000];
	int b[1000]={0};
	int len;
	int i;
	int j,k=0,h=0;
	int max=0,imax=0;
	my_scanf("%d",&n);
    my_scanf("%s",s);
	len=strlen(s);
	for(i=0;i<=len-n;i++)
	{
		h=0;
		for(j=i;j<i+n;j++)
		  a[k][h++]=s[j];
		a[k][h]='\0';
		k++;
	}
	for(i=0;i<k;i++)b[i]=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(strcmp(a[i],a[j])==0)b[i]++;
		}
	}
	
	for(i=0;i<k;i++)
		if(b[i]>max)
		  max=b[i];
		
		if(max==1)my_printf("NO\n");
		else 
		{my_printf("%d\n",max);
			for(i=0;i<k;i++)
			{
				if(b[i]==max)
				{
					my_printf("%s\n",a[i]);
					for(j=0;j<k;j++)
					{
						if(strcmp(a[i],a[j])==0)
						{
							b[j]=0;
						}
					}
				}
			}
		}
}



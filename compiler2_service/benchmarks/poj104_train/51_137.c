#define NUM_ITER 743415

#include <header.h>

int main_bench()
{
	int n,len;
	char a[500],b[500][50];
	int c[500]={0},d[500]={0};
	int i,j,k=0,t=0;
	my_scanf("%d\n",&n);
	my_scanf("%s",a);
	len=strlen(a);
	for(i=0;i<=len-n;i++)
	{
		
		for(j=i;j<=i+n-1;j++)
		{
			b[k][j-i]=a[j];
		
		}
		b[k][j-i]='\0';
		
		k++;
	}
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(strcmp(b[j],b[i])==0&&c[j]==0)
			{
				d[i]++;
				c[j]=1;
			}	
		}
	}
    for(i=0;i<k;i++)
	{
		if(d[i]>t)
			t=d[i];
	}
	
	if(t==1)
		my_printf("NO");
	else
    {
        my_printf("%d\n",t);
		
		for(i=0;i<k;i++)
	{
		if(d[i]==t)
			my_printf("%s\n",b[i]);
	
	}
	}
}
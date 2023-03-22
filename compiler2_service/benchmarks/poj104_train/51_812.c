#include <header.h>

int main_bench()
{
	char a[400],b[400][6];
	int k,i,j=0,n,m=1,q=0;
	my_scanf("%d",&k);
	my_scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n-k+1;i++)
	{
		for(j=0;j<k;j++)
		{
			b[i][j]=a[i+j];

		}
		b[i][j]='\0';
	}
	for(j=0;j<n-k;j++)
	{	m=0;
		for(i=j;i<n-k+1;i++)
		{
			if(strcmp(b[j],b[i])==0)m=m+1;
		}
		if(m>q)q=m;
		

	}
	if(q==1)my_printf("NO");
	else{
	my_printf("%d\n",q);
	for(j=0;j<n-k;j++)
	{	m=0;
		for(i=j;i<n-k+1;i++)
		{
			if(strcmp(b[j],b[i])==0)m=m+1;
		}
		if(m==q)my_printf("%s\n",b[j]);
	
	}}
}
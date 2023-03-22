#include <header.h>

int main_bench()
{
	int i,k,n,a[300],l,j,max;
	char s[500],gram[300][5];
	my_scanf("%d%s",&n,s);
	l=strlen(s);
	for(i=0;i<l-n+1;i++)
	{
		k=0;
		for(j=i;j<i+n;j++)
		{
			gram[i][k++]=s[j];
		}
		gram[i][k]='\0';
	}
	for(i=0;i<l-n+1;i++)
	{
		a[i]=1;
		for(j=i+1;j<l-n+1;j++)
		{
			if(strcmp(gram[i],gram[j])==0)
				a[i]++;
		}
	}
	max=a[0];
	for(i=0;i<l-n+1;i++)
		if(a[i]>max)
			max=a[i];
	if(max==1)
		my_printf("NO");
	else
	{
		my_printf("%d",max);
		for(i=0;i<l-n+1;i++)
			if(a[i]==max)
				my_printf("\n%s",gram[i]);
	}
	return 0;
}
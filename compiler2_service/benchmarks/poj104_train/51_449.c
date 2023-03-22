#include <header.h>


int compare(char str1[],char str2[],int x)
{
	int i,l;
	l=strlen(str1);
	for (i=0;i<l;i++)
	{
		if (str1[i]==str2[i+x])
			continue;
		else
			return 1;
	}
	return 0;
}

int main_bench()
{
	int i,j,l,k,n,sum,max=0;
	char a[501]={'\0'},b[6]={'\0'},c[100][6]={'\0'};
	my_scanf ("%d\n",&n);
	gets (a);
	l=strlen(a);
	for (i=0;i<=l-n;i++)
	{
		sum=0;
		for (j=0;j<n;j++)
			b[j]=a[i+j];
		b[n]='\0';
		for (j=0;j<=l-n;j++)
		{
			if (compare(b,a,j)==0)
				sum++;
		}
		if (sum>max)
			max=sum;
	}
	for (k=0,i=0;i<=l-n;i++)
	{
		sum=0;
		for (j=0;j<n;j++)
			b[j]=a[i+j];
		b[n]='\0';
		for (j=i;j<=l-n;j++)
		{
			if (compare(b,a,j)==0)
				sum++;
		}
		if (sum==max)
		{
			strcpy(c[k],b);
			k++;
		}
	}
	if (max==1)
	{
		my_printf ("NO");
		return ;
	}
	my_printf ("%d\n",max);
	for (i=0;i<k;i++)
		my_printf ("%s\n",c[i]);
}
#define NUM_ITER 763018

#include <header.h>

int main_bench()
{
	int a[500]={0},n,l,i,j,max=0;
	char s[501];
	my_scanf("%d\n",&n);
	gets(s);
	char b[501][5]={0};
	l=strlen(s);
	for(i=0;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
		{
		b[i][j]=s[i+j];
	    }
	}
	for(i=0;i<=l-n;i++)
	{
		for(j=i+1;j<=l-n;j++)
		{
			if(strcmp(b[i],b[j])==0) a[i]++;
		}
		if(a[i]>max) max=a[i];
	}
	if(max==0) my_printf("NO"); 
	else 
	{
		 my_printf("%d\n",max+1);
	     for(i=0;i<=l-n;i++)
	     if(a[i]==max)  my_printf("%s\n",b[i]);
	}
} 
#define NUM_ITER 52416

#include <header.h>

int main_bench()
{
	int n,i,j,k,a[500]={0},max,len,m;  
	char s[502],c[500][10],b[10]; 
	my_scanf("%d",&n);
	my_scanf("%s",s);
	len=strlen(s);
	for(i=0;i<n;i++)
		c[1][i]=s[i];
	c[1][n]='\0';
	a[1]=1;
	j=1;
	for(i=1;i<len-n+1;i++)
	{
		for(k=0;k<n;k++)
			b[k]=s[i+k];
		b[n]='\0';
		for(m=1;m<j+1;m++)
		{
			if(strcmp(b,c[m])==0)
			break;
		}
		if(m==j+1)
		{
			j++;
			strcpy(c[j],b);
			a[j]=1;
		}
		else
			a[m]++;
	}
    max=1;
	for(i=1;i<500;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	if(max==1)
	{
		my_printf("NO\n");
		return 0;
	}
	my_printf("%d\n",max);
	for(i=1;i<500;i++)
	{
		if(a[i]==max)
		my_printf("%s\n",c[i]);
	}
	return 0;
}
		



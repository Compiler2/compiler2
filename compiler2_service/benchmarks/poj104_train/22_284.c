#define NUM_ITER 1370011

#include <header.h>

int main_bench()
{
	char s[1000];
	int a[100]={0},k=0,i,j,l;
		my_scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			a[k]=a[k]*10+s[i]-48;
		if(s[i]==',')
			k=k+1;
	}
	for(i=0;i<k;i++)
		for(j=0;j<k-i;j++)
		{
			if(a[j]<a[j+1])
			{
				l=a[j];
				a[j]=a[j+1];
				a[j+1]=l;
			}
		}
	if(a[0]==a[k])
		my_printf("No");
	else if(a[0]!=a[k])
	{
		for(i=0;i<=k;i++)
		{
			if(a[0]-a[i]>0)
			{
				my_printf("%d",a[i]);
				break;}
			else
				continue;
		}
	}
}
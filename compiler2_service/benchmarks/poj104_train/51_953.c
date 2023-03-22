#define NUM_ITER 762586

#include <header.h>

int main_bench()
{
	void chuan(char (*p)[5],char *q,int n);
	char c[300],a[500][5]={'\0'},(*p)[5],*q;
	int n,s,i,j,k;
	int max[500]={0},da=0;
	my_scanf("%d",&n);
	my_scanf("%s",c);
	p=a;q=c;
	for(s=0;*q!='\0';q++)
		s++;
	for(i=0,q=c;i<s-n+1;i++,q++,p++)
	{
		chuan(p,q,n);
	}
	k=s-n+1;

	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{

			if(strcmp(a[i],a[j])==0)
				max[i]++;

		}
	}
	for(i=0;i<k;i++)
	{
		if(max[i]>da)
			da=max[i];
	}
	if(da==0)
		my_printf("NO");
	else
	{
		my_printf("%d\n",da+1);
		for(i=0;i<k;i++)
		{
			if(da==max[i])
				my_printf("%s\n",a[i]);
		}
	}
	return 0;
}
void chuan(char (*p)[5],char *q,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		*(*p+i)=*(q+i);
	}
}
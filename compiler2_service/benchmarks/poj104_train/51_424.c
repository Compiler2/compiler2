#define NUM_ITER 479430

#include <header.h>

int i,j,n,k;
int bijiao(char temp[],char c[])
{
	int q,w=1;
	for(q=0;q<n;q++)
	{
		if(temp[q]!=c[k+q])
			w=0;
	}
	return w;
}
int main_bench()
{
	int t=0,cao,max=0,l,a[1000]={0};
	char c[501]={0},temp[6]={0},A[1000][6]={0};
	my_scanf("%d",&n);
	cao=getchar();
	gets(c);
	l=strlen(c);
	for(i=0;i<=(l-n);i++)
	{
		for(j=0;j<n;j++)
		{
			temp[j]=c[i+j];
		}
		for(k=0;k<=(l-n);k++)
		{
			t=t+bijiao(temp,c);
		}
		a[i]=t;
		strcpy(A[i],temp);
		if(max<t)
		{
			max=t;
			t=0;
		}
		else
		{
			t=0;
		}
	}
	if(max==1)
	{
		my_printf("NO");
		return 0;
	}
	for(i=0;i<=(l-n);i++)
	{
		for(j=-1;j<i;j++)
		{
			if(strcmp(A[i],A[j])==0)
				a[i]=0;
		}
	}
	my_printf("%d\n",max);
	for(i=0;i<=(l-n);i++)
	{
		if(a[i]==max)
		{
			puts(A[i]);
			my_printf("\n");
		}
	}
	return 0;
}
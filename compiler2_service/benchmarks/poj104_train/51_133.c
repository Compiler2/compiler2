#define NUM_ITER 881907

#include <header.h>

int main_bench()
{
	char a[502],b[500][6];
	int i,j,l,m,n,k=0,c[500]={0},max=1,f=0;
	my_scanf("%d",&n);
	my_scanf("%s",a);
	l=strlen(a);
	m=l-n+1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			b[i][j]=a[i+j];
		b[i][j]='\0';
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
				if(a[j+k]!=b[i][k]) break;
			if(k==n) c[i]++;
		}
	}
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
		{
			if(j==i) continue;
			if(strcmp(b[i],b[j])==0) {b[j][0]='\0';c[j]=0;}
		}
	for(i=0;i<m;i++)
	{
		if(c[i]>=max) max=c[i];
	}
	if(max==1) my_printf("NO");
	else
	{my_printf("%d\n",max);
	for(i=0;i<m;i++)
		if(c[i]==max)
			my_printf("%s\n",b[i]);}
}


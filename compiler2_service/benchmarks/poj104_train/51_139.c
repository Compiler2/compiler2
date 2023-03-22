#define NUM_ITER 145557

#include <header.h>

int main_bench()
{
	int n,i,j,k,l,c,max=0,num[1000]={0},tag1,tag2,tag[1000]={0};
	char a[10000],b[1000][1000];
	my_scanf("%d %s",&n,a);
	l=strlen(a);
	for(i=0;i<l;i++)
		for(j=i;j<n+i;j++)
			b[i][j-i]=a[j];
	c=l-n+1;
	for(i=0;i<c;i++)
		for(k=i+1;k<c;k++)
		{
			tag1=1;
			for(j=0;j<n;j++)
				if(b[i][j]!=b[k][j])
					tag1=0;
			if(tag1==1)
			{
				tag[i]++;
			}
		}
	tag2=0;
	for(i=0;i<c;i++)
		if(tag[i]+1>max)
			max=tag[i]+1;
		if(max>1)
			tag2=1;
	if(tag2==0)
		my_printf("NO");
	else
	{
		my_printf("%d\n",max);
		for(i=0;i<c;i++)
			if(tag[i]+1==max)
				my_printf("%s\n",b[i]);
	}

}

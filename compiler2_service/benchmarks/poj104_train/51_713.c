#define NUM_ITER 769735

#include <header.h>


int main_bench()
{
	int m,n,t,e,i,j,k,l,p,max=0,c[501]={0};
	char a[501],b[251][5]={0};
	my_scanf("%d",&n);
	my_scanf("%s",a);
	m=strlen(a);
	for(j=0;j<m-n+1;j++)
	{
		for(i=0;i<n;i++)
		{
			b[j][i]=a[j+i];
		}
	}
	for(k=0;k<m-n+1;k++)
	{
		for(l=k;l<m-n+1;l++)
		{
			if(strcmp(b[k],b[l])==0) c[k]=c[k]+1;
		}
		if(c[k]>max) max=c[k];
	}
	if(max==1) my_printf("NO");
	else
	{
		my_printf("%d\n",max);
		for(p=0;p<m-n+1;p++)
		{
			if(c[p]==max)
			{
				my_printf("%s\n",b[p]);
			}
		}
	}
	return 0;
}
#define NUM_ITER 562904

#include <header.h>

int main_bench()
{
	char a[600],b[600][10]={0};
	int n,i,j,k=0,max=0,len,c[600]={0};
	my_scanf("%d\n",&n);
	gets(a);len=strlen(a);
	for(i=0;i<=len-n;i++)
	{
		for(j=i;j<i+n;j++)
		{b[k][j-i]=a[j];}
	    k++;
	}
	for(j=0;j<k;j++)
	{
		for(i=j;i<k;i++)
		{
			if(!strcmp(b[i],b[j]))c[j]++;	
		}
		if(c[j]>max)max=c[j];
	}
	if(max>1)
	{
		my_printf("%d\n",max);
		for(i=0;i<k;i++)
		if(c[i]==max)puts(b[i]);
	}
	else my_printf("NO");
	return 0;
}
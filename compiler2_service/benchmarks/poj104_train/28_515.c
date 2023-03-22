#define NUM_ITER 1112976

#include <header.h>

int main_bench()
{
	char a[1001];
	gets(a);
	int l=strlen(a);
	int index=1,num[301]={0};
	int i,n=0;
	for(i=0;i<l;i++)
	{
		if(a[i]==' '&&index==0)
		{
			index=1;
			n++;
		}
		else if(a[i]!=' '&&index==1)
		{
			num[n]++;
			index=0;
		}
		else if(a[i]!=' '&&index==0)
			num[n]++;
		else index=index;
	}
	if(n==0)
		my_printf("%d",num[0]);
	else{
	for(i=0;i<n;i++)
		my_printf("%d,",num[i]);
	my_printf("%d",num[n]);
}
}

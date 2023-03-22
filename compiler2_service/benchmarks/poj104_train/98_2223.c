#define NUM_ITER 28366

#include <header.h>

int main_bench()
{
	int a[1000],i,n,sum=0;
	char word[1000][40]={""};
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%s",word[i]),
		a[i]=strlen(word[i]);
	for(i=0;i<n-1;i++)
	{	sum=sum+a[i]+1;
	
	if(sum+a[i+1]<81)
		my_printf("%s ",word[i]);
	else
		my_printf("%s\n",word[i]),
		sum=0;
	}
	my_printf("%s",word[n-1]);
	return 0;
}

#define NUM_ITER 1340549

#include <header.h>

int main_bench()
{
	int i,p,n;
	char ori[101],tra[101];
	gets(ori);
	n=strlen(ori);
	tra[0]=ori[0];
	p=1;
	for(i=1;i<=n;i++)
	{
		if(ori[i]!=' '||ori[i-1]!=' ')
		{
			tra[p]=ori[i];
			p=p+1;
		}
		
	}
	my_printf("%s",tra);

	return 0;
}
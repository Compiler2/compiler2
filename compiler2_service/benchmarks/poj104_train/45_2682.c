#define NUM_ITER 883284

#include <header.h>

main_bench()
{
	char a[60]={0},b[60]={0},c[60]={0};
	my_scanf("%s %s",a,b);
	int n=strlen(b),m=strlen(a);
	int i,j,k,l;
	for(i=0;i<=n-m;i++)
	{
		for(j=i;j<=i+m-1;j++)
		{
			c[j-i]=b[j];
		}
		if(strcmp(a,c)==0) 
		{
			my_printf("%d",i);break;
		}
	}
	return 0;
}
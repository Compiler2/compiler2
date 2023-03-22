#define NUM_ITER 1254672

#include <header.h>

main_bench()
{
	char a[1501];
	int b[300],l,n,i,j,max,maxi=0,k=0;
	gets(a);
	l=strlen(a);
	n=0;
	for(i=0;i<l;)
	{
		b[n]=0;
		j=i;
		while(a[j]!=','&&j<l)
		{
			b[n]=b[n]*10+a[j]-'0';
			j++;
		}
		n++;     
		i=j+1;
	}

	max=b[0];
	for(i=1;i<n;i++)
	{	if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]<max&&b[i]>maxi)
		{	maxi=b[i];
		k++;}
	}
	if(k==0)
		my_printf("No");
	else my_printf("%d",maxi);
    


	return 0;
}
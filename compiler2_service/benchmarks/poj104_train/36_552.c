#define NUM_ITER 1056954

#include <header.h>

int compare(char b[],int n,char a)
{
	int i,j;
	for(i=0;i<n;++i)
		if(a==b[i])
		{
			for(j=i;j<n-1-i;++j)
				b[j]=b[j+1];
			return(0);
		}
		else
			continue;
	return(1);		
}		
main_bench()
{
	char a[100],b[100];
	int len1,len2,i,t=0;
	my_scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1==len2)
	{
		for(i=0;i<len1;++i)
			if(compare(b,len2,a[i]))
			{
				my_printf("NO\n");
				t=1;
				break;
			}
		if(t==0)
			my_printf("YES\n");
	}
	else
		my_printf("NO\n");
}
	

#define NUM_ITER 1037413

#include <header.h>

main_bench()
{
	char s1[50],s2[50];
	int n,i,j,a,b;
	my_scanf("%s %s",s1,s2);
	n=strlen(s1);
	for(i=0;s2[i]!='\0';i++)
	{
		b=i;
		a=0;
		for(j=0;j<n;j++)
		{
			if(s1[j]==s2[i])
				a++;
			i++;
		}
		if(a==n)
		{
			my_printf("%d",b);
			break;
		}
		else
			i=b;
	}
}
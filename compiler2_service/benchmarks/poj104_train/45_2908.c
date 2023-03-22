#define NUM_ITER 1067582

#include <header.h>

main_bench()
{
	char a[505],b[505];
	my_scanf("%s %s",a,b);
	int len1=strlen(a);
	int len2=strlen(b);
	int i,j,k=0;
	for(i=0;i<len2;i++)
	{
		if(b[i]==a[0])
		{
			for(j=0;j<len1;j++)
			{
				if(a[j]==b[i+j])
                   k++;
			}
			if(k==len1)
			{
				my_printf("%d\n",i);
				break;
			}
		}
	}
}
#include <header.h>

main_bench()
{
	char a[200],b[200];
	my_scanf("%s %s",a,b);
	int la=strlen(a),lb=strlen(b);
	int i,j;char c;
	if(la!=lb) my_printf("NO");
	else
	{
		for (i=0;i<la;i++)
			for(j=i+1;j<la;j++)
			{
				if(a[i]<a[j])
				{
					c=a[i];a[i]=a[j];a[j]=c;
				}
			}
		for (i=0;i<lb;i++)
			for(j=i+1;j<lb;j++)
			{
				if(b[i]<b[j])
				{
					c=b[i];b[i]=b[j];b[j]=c;
				}
			}
		if (strcmp(a,b)==0) my_printf("YES");
		else my_printf("NO");
	}
	return 0;
}